/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:35:43 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/31 19:23:53 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies the function ’f’ on each character of
   the string passed as argument, passing its index
   as first argument. Each character is passed by
   address to ’f’ to be modified if necessary.
 *
*/

//#include <stdio.h>

/*
void	ft_capitalize(unsigned int i, char *c)
{
	if (0 == i)
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
	}
}
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (NULL == s || NULL == f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		++i;
	}
}

/*
int	main(int argc, char **argv)
{
	void	(*f)(unsigned int, char *);

	f = ft_capitalize;
	ft_striteri(argv[1], f);
	printf("%s\n", argv[1]);
}
*/
