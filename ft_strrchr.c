/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:08:22 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:13:00 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

/*
 *
 *  locates the last occurrence of c 🚨(converted to a char)🚨
 *  in the string pointed to by s.  The terminating null character 
 *  is considered to be part of the string; 
 *  therefore if c is `\0', the functions locate the terminating `\0'.
 *
 * TLDR
 * The strrchr() function is identical to strchr(), 
 * except it locates the last occurrence of c.
 *
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == *(s + len))
			return ((char *)(s + len));
		--len;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	v[] = "Hello world";
	printf("%p\n", ft_strrchr(v, '\0'));	
	printf("%p\n", strrchr(v, '\0'));	
}
*/
