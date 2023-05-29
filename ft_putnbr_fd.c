/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 22:49:13 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/24 23:10:05 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	print;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * (-1);
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		print = (n % 10 + '0');
		ft_putchar_fd(print, fd);
	}
}

// Esto sería correcto si me dejaran usar malloc.
// void	ft_putnbr_fd(int n, int fd)
// {
//     char *num;
//     num = ft_itoa(n);

//     ft_putstr_fd(num, fd);
//     free(num);
// }