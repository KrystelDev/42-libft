/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcelona.co +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:26:40 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/15 22:03:34 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter_write;

	letter_write = 'a';
	while (letter_write <= 'z')
	{
		write(1, &letter_write, 1);
		letter_write++;
	}
}
