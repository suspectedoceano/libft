/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:30:22 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 23:39:27 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

/*
 * memchr() is a function in the C standard library that
 * searches for the first occurrence of a given character in a memory block. 
 * It takes in three arguments: 
 * 	~a pointer to the memory block to be searched, 
 * 	~the character to search for,
 * 	~the size of the memory block.
 * The function returns a pointer to the first occurrence of the character 
 * in the memory block, or a null pointer if the character is not found.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		++i;
	}
	return (NULL);
}

/*

//gcc ft_memchr.c && ./a.out s c n 
int	main(int argc, char **argv)
{
	char	c;
	char	*s;
	int		n;

	s = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	printf("%p\n\n", ft_memchr(s, c, n));
	printf("%p\n\n", memchr(s, c, n));
}
*/
