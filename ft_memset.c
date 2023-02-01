/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:03:03 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 23:58:05 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

/*
 * The memset function is a C library function that is used 
 * to set a block of memory to a specific value.
 * The function takes three arguments: 
 * 		~a pointer to the memory block to be set, 
 * 		~the value to set it to, 
 * 		~and the number of bytes to set.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	
	typedef unsigned char *byte;
	while (len-- > 0)
		*((byte)b + len) = c;
	return (b);
}

/*
int	main(void)
{
	char	v[10]; 

	ft_memset(v, 42, 5);

	for (int i = 0; i < 10; ++i)	
		printf("%d\n", v[i]);
	printf("ft_memset-> %p\n\n", ft_memset(v, 42, 5));
	


	memset(v, 21, 5);

	for (int i = 0; i < 10; ++i)
		printf("%d\n", v[i]);
	printf("Real memset-> %p\n", memset(v, 21, 5));
}
*/
