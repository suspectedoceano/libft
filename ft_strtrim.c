/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:02:23 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 10:10:42 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPTION
 * Allocates (with malloc(3)) and returns a copy of
   ’s1’ with the characters specified in ’set’ removed
   from the beginning and the end of the string.
 *
 * ARGUMENTS
 * s1: The string to be trimmed.
   set: The reference set of characters to trim.
 *
 * RETURN 
 * The trimmed string.
   NULL if the allocation fails.
 *
 * For example, let's say 's1' is equal to "Hello, World!"
 * and 'set' is equal to ",! ".
 * The function would create a new string in memory, 
 * and copy "Hello, World!" into it. 
 * Then it would remove the comma, exclamation mark 
 * and space from the beginning and end of the new string,
 * so it would be "Hello, World" after function execution.
*/

//#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (NULL == s1 || NULL == set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		++start;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		--end;
	if (start > end)
		return (ft_strdup(""));
	trimmed = malloc((end - start) + 2);
	if (NULL == trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, (end - start) + 2);
	return (trimmed);
}

/*
int main(void) 
{
	printf("%s\n", ft_strtrim("  ", " "));
	
}
*/
