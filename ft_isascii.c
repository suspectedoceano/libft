/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:26:51 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 21:16:27 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(void)
{
	for (int i = 0; i < 256; ++i)
	{
		if (ft_isascii(i))
			printf("My function   %d-> %c\n", i, i);
		if (isascii(i))
			printf("Real function %d-> %c\n\n\n", i, i);
	}	
}
*/
