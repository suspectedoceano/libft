/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:36:49 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/22 21:15:07 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *It's a good practice to include the library header file in every 
 implementation file of the library functions,
 because it ensures that the function implementation adheres to the 
 function prototype defined in the header file.
 *
*/
//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/*
int	main(void)
{	
	for (int i = 0; i <= 127; ++i)
		if (ft_isalpha(i))
			printf("The char %c is alpha\n", i);
}
*/
