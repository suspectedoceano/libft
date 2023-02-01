/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:12:10 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:26:00 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPTION
 * Applies the function ’f’ to each character of the
   string ’s’, passing its index as first argument
   to create a new string (with malloc(3)) resulting
   from successive applications of ’f’.
 * 
 * BETTER DESCRIPTION
 * ft_strmapi stands for "string map indexed."
 * It is a function that applies a given function to each 
 * character of a string, while also passing the index of the 
 * character to the function. The result is a new string 
 * with the modified characters. Essentially, it takes the 
 * string, applies a function to each element of the string, 
 * and then returns a new string with the modified elements.
 *
 * RETURN 
 * The string created from the successive applications
   of ’f’.
   Returns NULL if the allocation fails.
*/

#include "libft.h"
//#include <stdio.h>

/*
char my_func(unsigned int i, char c) {
    // example function that capitalizes every even indexed character
    if (i % 2 == 0) {
        return c - 32;
    }
    return c;
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	if (NULL == s)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (NULL == ptr)
		return (NULL);
	if (NULL == f)
	{
		ft_strlcpy(ptr, s, ft_strlen(s) + 1);
		return (ptr);
	}
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
 *
int	main(int argc, char **argv)
{
	char 	*s;
	char	(*f)(unsigned int, char);	

	f = my_func;
	s = "hello";	
	printf("%s\n", ft_strmapi(s, f));
}
*/
