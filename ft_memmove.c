/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:07:39 by smbaabu           #+#    #+#             */
/*   Updated: 2023/01/31 19:09:31 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Move block of memory 
 * Copies the values of 
 * 		~len bytes from the location 
 * 		~pointed by source to the memory block 
 * 		~pointed by destination. 
 *
 * Copying takes place as if an intermediate buffer were used,
 * allowing the destination and source to overlap.
 *
 *
    if memcpy copies "front to back" and the memory blocks are aligned as this
[---- src ----]
            [---- dst ---]
copying the first byte of src to dst already destroys the content 
of the last bytes of src before these have been copied. 
Only copying "back to front" will lead to correct results.

Now swap src and dst:

[---- dst ----]
            [---- src ---]
 * 
 * TL;DR
 * memmove, is typically implemented as a slower, safer version of memcpy 
 * that can handle overlapping memory regions. 
 * memmove copies the data from the source to a temporary buffer, 
 * and then copies the data from the temporary buffer to the destination. 
 * This ensures that the data is copied correctly 
 * even if the source and destination memory regions overlap.
*/

#include "libft.h"
//#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	typedef unsigned char byte;
	if ((NULL == src && NULL == dst) || len < 0)
		return (dst);
	if (dst > src)
		while (len--)
			*((byte *)dst + len) = *((byte *)src + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char    *dest;

	dest = src + 1;
	printf("%s\n", (char *)ft_memmove(src, dest, 8));
}
*/
