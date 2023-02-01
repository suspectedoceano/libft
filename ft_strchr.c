/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:41:32 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:12:40 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPTION
 * The strchr() function locates the first occurrence 
 * of c 🚨(converted to a char)🚨 in the string pointed to by s.
 * The terminating null character is considered to be 
 * part of the string; therefore if c is `\0', 
 * the functions locate the terminating `\0'.
 *
 *
 * strchr is a C library function that searches for the first occurrence 
 * of a character in a string. It takes two arguments: 
 * 		~a pointer to the string to search and 
 * 		~the character to search for. 
 *
 * 🚨
 * The terminating null character is considered to be part
 * of the string; therefore if c is `\0', the func-
 * tions locate the terminating `\0'.
 * 🚨
 *
 * TLDR
 * It returns a pointer to the first occurrence of the character 
 * in the string, or a null pointer if the character is not found.
*/

//#include<stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		++s;
	if (*s)
		return ((char *)s);
	else if (!*s && 0 == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*
int	main(void)
{
	char	*s = "Bonjour";

	printf("%p\n", strchr(s, 'b'));
	printf("my func-> %p\n\n", ft_strchr(s, 'b'));

	printf("%p\n", strchr(s, 'j'));
	printf("%p\n\n", ft_strchr(s, 'j'));
	
	printf("%p\n", strchr(s, 's'));
	printf("%p\n\n", ft_strchr(s, 's'));
	
	printf("%p\n", strchr(s, '\0'));
	printf("%p\n\n", ft_strchr(s, '\0'));

	char	*s1 = "";
	printf("%p\n", strchr(s1, '\0'));
	printf("%p\n\n", ft_strchr(s1, '\0'));
}
*/
