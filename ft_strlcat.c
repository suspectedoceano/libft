/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:23:42 by Oceano            #+#    #+#             */
/*   Updated: 2023/02/01 10:13:28 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The function concatenates a copy of the null-terminated string src 
 * to the end of the null-terminated string dest,
 * ensuring that the resulting string in dest is always null-terminated.

 *The function takes three parameters:

	~dest: A pointer to the destination buffer.
	~src: A pointer to the source string that will be concatenated 
		  to the end of the destination buffer.
	~dstsize: The maximum size of the destination buffer,
   		   including the null-terminator.
 *
 *  The function copies the source string 
 *  to the end of the destination string,
 *  and ensures that the destination string 
 *  🚨is not exceeded the maximum size provided.🚨
 *
 *  If the destination string exceeds the maximum size, 
 *  🚨the function does not add anything to the destination string.🚨
 *
 * RETURN
 * the initial length of dst plus the length of src.
 * If the return value is >= dstsize,
 * the output string has been truncated.
 *
 * if (dest_len > dstsize)
 * the function returns the sum of the length of the source string (src_len) 
 * and the size of the destination buffer (dstsize). 
 * This value represents the total length of the destination string 
 * that would have been produced if there had been enough space in the buffer.
*/

#include "libft.h"
//#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dst && 0 == dstsize)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dest_len >= dstsize)
		return (src_len + dstsize);
	else
		dstsize -= dest_len;
	ft_strlcpy(dst + dest_len, src, dstsize);
	return (dest_len + src_len);
}

/*
int main()
{
	int		dest_len;
	dest_len = 15;
	char	dest[dest_len];
	int		ret;



	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ret = ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
	printf("%s->%d\n", dest, ret);
	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ret = strlcat(dest, "lorem ipsum dolor sit amet", 15);
	printf("%s->%d\n", dest, ret);

	
	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ret = ft_strlcat(dest, "lorem ipsum dolor sit amet", 2);
	printf("%s->%d\n", dest, ret);
	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ret = strlcat(dest, "lorem ipsum dolor sit amet", 2);
	printf("%s->%d\n", dest, ret);

	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	ft_strlcat(dest, "lorem ipsum dolor sit amet", 0);
	printf("%s\n", dest);
	for (int i = 0; i < 15; ++i)dest[i] = 0;
	memset(dest, 'r', 6);
	strlcat(dest, "lorem ipsum dolor sit amet", 0);


}
*/
