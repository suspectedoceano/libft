/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:55:17 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:06:34 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

/*
 *
 * memcpy is a C library function that is used to copy a 
 * block of memory from one location to another.
   The function takes three arguments: 
 		~a pointer to the destination memory block, 
		~a pointer to the source memory block, 
		~and the number of bytes to copy.
 *
 * RETURN VALUES
 *   The memcpy() function returns the original value of dst.
 *
 * MEMCPY vs MEMMOVE
 * video-> https://www.youtube.com/watch?v=nFl1cNXk85s&t=397s
 * if the pointers overlap, the function memcpy may overwrite the original data,
 * that's why the function memmove should be used to 
 * handle overlapping memory regions.
 *
 * IMPLEMENTATIONS
void memmove ( void * dst, const void * src, size_t count ) 
{
    if ((uintptr_t)src < (uintptr_t)dst) {
        // Copy from back to front

    } else if ((uintptr_t)dst < (uintptr_t)src) {
        // Copy from front to back
    }
}

void memcpy ( void * dst, const void * src, size_t count )
{
    if ((uintptr_t)src != (uintptr_t)dst) {
        // Copy in any way you want
    }
}

if memcpy copies "front to back" and the memory blocks are aligned as this
[---- src ----]
            [---- dst ---]
copying the first byte of src to dst already destroys the content 
of the last bytes of src before these have been copied. 

Only copying "back to front" will lead to correct results.
Now swap src and dst:

[---- dst ----]
            [---- src ---]

 * TLDR
 * memcpy is typically implemented as a fast, raw memory copy operation 
 * that simply copies data from one memory location to another,
 * without any checks for overlap between source
 * and destination memory regions. 
 * This can lead to incorrect results if the source
 * and destination memory regions overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	i = 0;
	if (NULL == src && NULL == dst)
		return (NULL);
	while (n--)
		*((unsigned char *)dst + i++) = *(unsigned char *)src++;
	return (dst);
}

/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return ((void *)dest);
}
*/
/*
int	main(void)
{
	char	v[] = "hello";
	char	v1[] = "World";

	printf("%s ->%p\n", v,  ft_memcpy(v, v1, 3));

	printf("%s ->%p\n", v,  memcpy(v, v1, 3));
}
*/
