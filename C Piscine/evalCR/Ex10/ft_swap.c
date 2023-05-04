/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:56:28 by kryrodri          #+#    #+#             */
/*   Updated: 2023/04/13 17:26:54 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
// #include <stdio.h>
// int main(void)
// {
// 	int num1 = 1;
//  int num2 = 2;
// 	int *nbr1;
// 	int *nbr2;
// 	nbr1 = &num1;
// 	nbr2 = &num2;
// 	// imprimir abans de canvi
// 	printf ("Antes de cambiar el valor nbr vale: ");
// 	printf("%i", *nbr1);
// 	printf ("\n");
// 	printf("%i", *nbr2);
// 	printf ("\n");
// 	printf ("Donde apunta el puntero antes de cambiar el valor del puntero? ");
// 	printf("%p", nbr1);
// 	printf ("\n");
// 	printf("%p", nbr2);
// 	printf ("\n");
// 	ft_swap(nbr1, nbr2);
// 	//imprimir despres de canvi
// 	printf ("despues de cambiar el valor nbr vale: ");
// 	printf("%i", *nbr1);
// 	printf ("\n");
// 	printf("%i", *nbr2);
// 	printf ("\n");
// 	printf ("Donde apunta el puntero despues de 
// cambiar el valor del puntero? ");
// 	printf("%p", nbr1);
// 	printf ("\n");
// 	printf("%p", nbr2);
// 	printf ("\n");
// }
// // %c	Imprime el carácter ASCII correspondiente
// // %d, %i	Conversión decimal con signo de un entero
// // %p	Dirección de memoria (puntero)
// // %s	Cadena de caracteres (terminada en '\0')