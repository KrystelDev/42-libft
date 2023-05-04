/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:56:35 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/02 13:33:52 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (argc > 0)
	{
		while (argv[j])
		{
			while (argv[j][i] != '\0')
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			i = 0;
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
