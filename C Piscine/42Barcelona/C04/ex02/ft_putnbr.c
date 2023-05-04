/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:39:36 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 23:54:09 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * (-1);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		print = (nb % 10 + '0');
		write(1, &print, 1);
	}
}

// int main (void)
// {
//     ft_putnbr(9);
// }