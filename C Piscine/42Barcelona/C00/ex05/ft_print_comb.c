/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:40:34 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/15 22:23:24 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (!(first == '7' && second == '8' && third == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{	
				ft_putchars(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
