/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:43:42 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 23:45:07 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * memcmp() is a function in the C standard library 
 * that compares two memory blocks.
 * It takes in three arguments: 
 * 		~pointers to the two memory blocks to be compared, 
 * 		~and the size of the memory blocks. 
 * 	The function returns an integer value indicating the relationship 
 * 	between the two memory blocks: 
 * 		~0 if they are equal,
 * 		~a positive value if the first memory block is greater than the second, 
 * 		~and a negative value if the first memory block is less than the second.
*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		++i;
	}
	return (0);
}

/*

int	main(int argc, char **argv)
{
	char	*s = argv[1];
	char	*s1 = argv[2];
	int		n = atoi(argv[3]);
	
	if (!ft_memcmp(s, s1, n))
		printf("The string are equal up to %d letters\n\n\n", n);
	else 
		printf("The strings are different\n\n\n");

	if (!memcmp(s, s1, n))
		printf("The string are equal up to %d letters\n", n);
	else 
		printf("The strings are different\n");

	
}
*/
