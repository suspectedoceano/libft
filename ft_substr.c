/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:22:24 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 17:41:51 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’.
 *
 *  ARGUMENTS
 *  s: The string from which to create the substring.
	start: The start index of the substring in the string ’s’.
	len: The maximum length of the substring.
 *	
 *  RETURN 
 *  The substring
 *  NULL if allocation fails
 *
*/

//#include <stdio.h>
//#include <stdlib.h>

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (NULL == s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = malloc(len + 1);
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
int	main()
{
	char	*str;

	str = "hello";
	printf("%s\n",ft_substr(str, 400, 20));
}
*/
