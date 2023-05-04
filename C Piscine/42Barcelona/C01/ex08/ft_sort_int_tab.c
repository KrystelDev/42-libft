/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:16:15 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/16 22:16:18 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	max;
	int	tab_copy[2096126];

	i = 0;
	max = size;
	while (i < max)
	{
		tab_copy[size - 1] = tab[i];
		i++;
		size--;
	}
	i = 0;
	while (i < max)
	{
		tab[i] = tab_copy[i];
		i++;
	}
}
