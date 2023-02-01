/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:34:09 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 20:05:12 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
*/

/*
 *
 * The strncmp() function compares not more than n characters.
 *
 * RETURN is the difference of the chars
 *
 * The strcmp() and strncmp() functions return an integer
 *  ~Greater than,
 *  ~equal to,
 *  ~less than 0, according as the string s1 is greater than,
 *   equal to,
 *   or less than the string s2. 
 *
 *   🚨The comparison is done using unsigned characters,
 *   so that `\200' is greater than `\0'🚨
 *
 * 	[h e l l o]       [h i]          [h e l l o]
 *
 * 	[h e l l o]		  [h e l l o]    [h i]
*/

#include "stdlib.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 == *s2 && --n && *s1)
	{
		++s1;
		++s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*

int	main(int argc, char **argv)
{
	char	*s;
	char 	*s1;
	int		n;

	s = argv[1];
	s1 = argv[2];
	n = atoi(argv[3]);
	if (ft_strncmp(s, s1, n))
		printf("The strings are not equal\n");
	else 
		 printf("The strings are equal\n");
	if (ft_strncmp(s, s1, n))
		printf("The strings are not equal\n");
	else 
		 printf("The strings are equal\n");

	//CORNER CASE
	ft_strncmp("test\200", "test\0", 6);

}
*/
