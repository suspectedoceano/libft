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

	 If error return NULL 
	 and set errno to ENOMEM.

	 In the C standard library, calloc is expected to return a 
	 valid pointer when both nmemb and size are 0.

*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nmemb * size;
	if (size && ((bytes / size) != nmemb))
		return (NULL);
	ptr = malloc(bytes);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}
