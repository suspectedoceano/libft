/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:09:33 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:11:26 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
 * The strlen() function returns the number of characters that precede the
     terminating NUL character.
 *
 * size_t is not a primitive, is defined into
 * <stddef.h> or <stdlib.h>, and <stddef.h> is inside <stdio.h>
 * it is an unsigned char
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

/*
int	main(void)
{
	char *s = "hello";
	char *s1 = "";

	printf("Len of %s -> %zu\n", s, ft_strlen(s));
	printf("Len of %s -> %zu", s1, ft_strlen(s1));

}
*/
