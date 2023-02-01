/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:22:55 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/24 11:07:34 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
//#include <stdio.h>
//#include <string.h>

/*
 * strlcpy function. 
 * It copies at most dstsize - 1 characters from 
 * the string src to the string dst
 * and ensures that dst is null-terminated. 
 *
 * RETURN
 * The function also returns the length of src, 
 * which is the number of characters that would 
 * have been copied if dstsize was not limited.
 *
 * The strlcpy() and strlcat() functions return 
 * the total length of the string they
 * tried to create.  
 * For strlcpy() that means the length of src. 
 *
 * For strlcat() that means the initial
 * length of dst plus the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dst || NULL == src || !dstsize)
		return (src_len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}

/*
#define DEST_SIZE 5

int	main(void)
{
	char	dst[DEST_SIZE];
	char	src[] = "rrrrrr\0\0\0\0\0\0";


	printf("%s-> %lu\n", dst, strlcpy(dst, "lorem", DEST_SIZE));

	char	dst1[DEST_SIZE];

	printf("My function -> %s-> %lu\n", dst, ft_strlcpy(dst1, "lorem", DEST_SIZE));

}
*/
