/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:17:14 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/24 19:59:47 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor
//followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}	
}

/*
int	main()
{
	ft_putendl_fd("hello", 0);
	ft_putendl_fd("hello", 1);
	ft_putendl_fd("hello", 2);
	//3 not in terminal
	ft_putendl_fd("hello", 3);
}
*/
