/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:27:33 by Oceano            #+#    #+#             */
/*   Updated: 2023/02/01 12:12:45 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * The calloc() function contiguously allocates enough space for 
 *   ~count objects elements 
 *   ~that are size bytes of memory each.
 *   returns a pointer to the allocated memory. 
	 The allocated memory is filled with bytes of value zero.
*/

//#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}
