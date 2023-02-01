/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:01:14 by Oceano            #+#    #+#             */
/*   Updated: 2023/02/01 10:18:07 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

/*
 * The strnstr() function locates the first occurrence 
 * of the null-terminated string needle in the string haystack, 
 * where not more than len characters are searched. 
 *
 * Characters that appear after a `\0' character are not searched.
 * Since the strnstr() function is a FreeBSD specific API,
 * it should only be used when portability is not a concern.
 *
 * RETURN VALUES
 * If needle is an empty string, haystack is returned; ✅
 * if needle occurs nowhere in haystack, NULL is returned; 
 * otherwise a pointer to thefirst character ✅
 * of the first occurrence of needle is returned. ✅

*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	k;

	j = 0;
	if (!*needle || (NULL == haystack && !len))
		return ((char *)haystack);
	while (*(haystack + j) && j < len)
	{
		k = 0;
		while (*(haystack + j + k) == *(needle + k) && (k + j) < len)
		{
			if (0 == *(needle + k + 1))
				return ((char *)haystack + j);
			++k;
		}
		++j;
	}
	return (NULL);
}

/*
int	main()
{	
// ->NULL back
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

}
*/
