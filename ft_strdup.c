/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:02:58 by Oceano            #+#    #+#             */
/*   Updated: 2023/02/01 12:09:49 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/

/*
 *
 * strdup is a C library function that creates a new,
 * duplicate string from an existing string. 
 * The function takes a single argument, 
 * 		~a pointer to the string to be duplicated, 
 * and returns a pointer to the new string. 
 *
 * The new string is created using malloc and is 
 * guaranteed to be null-terminated. 
 * The caller is responsible for freeing the memory 
 * allocated by the function using free.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		buf_size;

	buf_size = ft_strlen(src) + 1;
	str = malloc(buf_size);
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, src, buf_size);
	return (str);
}
