/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:58:54 by kryrodri          #+#    #+#             */
/*   Updated: 2023/04/17 17:15:22 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	raiz;
	int	max;

	raiz = 0;
	max = (nb / 2) + 1;
	if (max > 46340)
	{
		return (0);
	}
	while (raiz <= max)
	{
		if (raiz * raiz - nb == 0)
		{
			return (raiz);
		}
		raiz++;
	}
	return (0);
}

// #include <stdio.h>
// #include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
// int main(void)
// {
// 	int nb = 1;
// 	double time_spent = 0.0;
// 	clock_t begin = clock();
// 	ft_sqrt(nb);
// 	clock_t end = clock();
// 	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
// 	printf("Es tarda %f segons", time_spent);
// 	printf ("\n");
// 	printf("nb: %i", nb);
// 	printf ("\n");
// 	printf("la raíz cuadrada de nb: %i", ft_sqrt(nb));
//  }