/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:24:57 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 21:04:36 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * bzero is a C library function that is similar to the memset function. 
 * It is used to set a block of memory to the value of zero.
 * The function takes two arguments:
 * 		~a pointer to the memory block to be set,
 * 		~and the number of bytes to set.
 *
 * DESCRIPTION
 * The bzero() function writes n zeroed bytes to the string s. 
 * If n is zero, bzero() does nothing.
*/

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*((unsigned char *)s + n) = 0;
}

/*
int	main(void)
{
	int		v[20];

	for (int i = 0; i < 20; ++i)
		v[i] = 42;

	for (int i = 0; i < 20; ++i)
		printf("%d\n", v[i]);
	puts("");

	ft_bzero(v, 9);
	
	for (int i = 0; i < 20; ++i)
		printf("%d\n", v[i]);
}
*/
