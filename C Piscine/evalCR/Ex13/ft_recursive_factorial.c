/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:57:43 by kryrodri          #+#    #+#             */
/*   Updated: 2023/04/17 11:55:38 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main(void)
// {
// 	int nb = 12;
//     printf ("antes de cambiar los valores vale: ");
//     printf ("\n");
// 	printf("nb: %i", nb);
// 	printf ("\n");
// 	printf ("despues de cambiar los valores vale: ");
//     printf ("\n");
// 	printf("factorial de nb: %i", ft_recursive_factorial(nb));
// 	printf ("\n");
// }
// 
// #include <stdio.h>
// int ft_recursive_factorial(int nb)
// {
//   int result;
//     if (nb < 0)
//       return 0;
//     if (nb == 0)
//       return 1;
//     result = ft_recursive_factorial(nb-1);
//     if (result * nb > 2147483647)
//       return 0;
//     return result * nb;
// }
// 
// int main(void)
// {
//     int nb = 13;
//     printf("factorial de nb: %i", ft_recursive_factorial(nb));
//     printf ("\n");
// 
// }
// // da el resultado de uno menos.