/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:31:45 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/15 22:47:12 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter_write;

	letter_write = 'z';
	while (letter_write >= 'a')
	{
		write(1, &letter_write, 1);
		letter_write--;
	}
}
