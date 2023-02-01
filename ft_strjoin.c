/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:59:37 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:31:40 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ARGUMENTS
 * s1: The prefix string.
 * s2: The suffix string.
 *
 * DESCRIPTION
 * Allocates (with malloc(3)) and returns a new
   string, which is the result of the concatenation
   of ’s1’ and ’s2’.
 *
 * RETURN
 * The new string.
 * NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	buffer;
	size_t	i;
	char	*ptr;

	i = 0;
	if (NULL == s1 || NULL == s2)
		return (NULL);
	buffer = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(buffer);
	if (NULL == ptr)
		return (NULL);
	while (*s1)
		*(ptr + i++) = *s1++;
	while (*s2)
		*(ptr + i++) = *s2++;
	*(ptr + i) = '\0';
	return (ptr);
}

/*

int	main(int argc, char **argv)
{
	char	*s = "Hello";
	char	*s1 = "World";

	printf("%s\n\n", ft_strjoin(s, s1));
}
*/
