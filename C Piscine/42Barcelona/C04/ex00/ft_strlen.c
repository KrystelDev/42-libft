/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:26:28 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 21:00:24 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n_str;

	n_str = 0;
	while (*str)
	{
		n_str++;
		str++;
	}
	return (n_str);
}
// #include <unistd.h>
// int main (void)
// {
//     char print = (ft_strlen("1234") + '0');
//     write(1, &print, 1);
// }