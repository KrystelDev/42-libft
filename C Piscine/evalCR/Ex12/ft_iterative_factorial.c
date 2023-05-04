/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:51:29 by kryrodri          #+#    #+#             */
/*   Updated: 2023/04/17 11:51:41 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb >= 1)
	{
	result = result * nb--;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	int nb = 13;
//     printf ("antes de cambiar los valores vale: ");
//     printf ("\n");
// 	printf("nb: %i", nb);
// 	printf ("\n");
// 	printf ("despues de cambiar los valores vale: ");
//     printf ("\n");
// 	printf("factorial de nb: %i", ft_iterative_factorial(nb));
// 	printf ("\n");
// }