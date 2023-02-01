/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:48:23 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/30 09:34:21 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<ctype.h>
//#include<stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
int	main(void)
{
	for (int i = 0; i < 127; ++i)
	{
		if (ft_isdigit(i))
			printf("My function-> %c is a digit\n", i);
		if (isdigit(i))
			printf("Real function-> %c is a digit\n\n\n", i);
	}

}
*/
