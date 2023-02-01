/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Oceano <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:50:46 by Oceano            #+#    #+#             */
/*   Updated: 2023/01/24 20:04:16 by Oceano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Outputs the integer ’n’ to the given file descriptor.
 *
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (-2147483648 == n)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n *= -1;
		write(fd, "-", 1);
	}	
	if (0 == n)
		write(fd, "0", 1);
	else if (n > 0 && n < 10)
		ft_putchar_fd((n + 48), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}

/*
int	main()
{
	ft_putnbr_fd(404, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);	
}
*/
