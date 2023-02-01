/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:12:21 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 21:13:08 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<ctype.h>
//#include<stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

/*
int	main(void)
{
	for (int i = 0; i < 256; ++i)
	{
		if (ft_isprint(i))
			printf("From my function   ->%c is printable\n", i);
		if (isprint(i))
			printf("From real function ->%c is printable\n\n\n", i);
	}
}
*/
