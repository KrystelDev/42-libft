/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:27:29 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/14 17:22:15 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int number)
{
	char	ten;
	char	unitary;

	ten = (number / 10) + '0';
	unitary = (number % 10) + '0';
	write(1, &ten, 1);
	write(1, &unitary, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_int(first);
			write(1, " ", 1);
			ft_print_int(second);
			if (!(first == 98 && second == 99))
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}
