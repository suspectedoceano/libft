/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:11:13 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/30 20:14:19 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

/*
 * DESCRIPTION
 * Allocates (with malloc(3)) and returns an array of strings obtained 
 * by splitting ’s’ using the character ’c’ as a delimiter. 
 * The array must end with a NULL pointer.
 *
 * RETURN
 * The array of new strings resulting from the split.
 * NULL if the allocation fails.
 *
 * INPUT 
 * s: The string to be split.
   c: The delimiter character.
*/

static size_t	count_strings(const char *s, char delimiter)
{
	size_t	strings;

	strings = 0;
	while (*s)
	{
		while (*s == delimiter && *s)
			++s;
		if (*s != delimiter && *s)
		{
			++strings;
			while (*s != delimiter && *s)
				++s;
		}
	}
	return (strings);
}

static int	safe_malloc(char **matrix, int position, size_t buffer)
{
	int		i;

	i = 0;
	matrix[position] = malloc(buffer);
	if (NULL == matrix[position])
	{
		while (i < position)
			free(matrix[i++]);
		free(matrix);
		return (1);
	}
	return (0);
}

static int	fill_matrix(char **matrix, const char *s, char delimiter)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimiter)
			++s;
		while (*s != delimiter && *s)
		{
			++len;
			++s;
		}
		if (len)
			if (safe_malloc(matrix, i, len + 1))
				return (1);
		ft_strlcpy(matrix[i++], s - len, len + 1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	strings;
	char	**matrix;
	int		i;

	i = 0;
	if (NULL == s)
		return (NULL);
	strings = count_strings(s, c);
	matrix = malloc((strings + 1) * sizeof(char *));
	if (NULL == matrix)
		return (NULL);
	matrix[strings] = NULL;
	if (fill_matrix(matrix, s, c))
		return (NULL);
	return (matrix);
}

/*
 * TEST
int	main()
{
	ft_split("hello!", 32:' ');
}
*/
