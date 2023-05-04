/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:42:06 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/17 00:42:17 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	box;

	box = *a;
	*a = *b;
	*b = box;
}

// #include <stdio.h>
// int main(void)
// {
//     int num1 = 1;
//     int num2 = 2;
// 	int *a = &num1;
//     int *b = &num2;

// 	// imprimir abans del  intercanvi
// 	printf ("Antes de intercambiar los valores: ");
//     printf ("\n");
// 	printf("valor de a, %i", *a);
// 	printf ("\n");
//     printf("valor de b, %i", *b);
//     printf ("\n");

// 	ft_swap(a, b);
// 	//imprimir despres del  intercanvi
// 	printf ("Despues de intercambiar los valores: ");
//     printf ("\n");
// 	printf("valor de a, %i", *a);
// 	printf ("\n");
//     printf("valor de b, %i", *b);
//     printf ("\n");
// }

// // %c	Imprime el carácter ASCII correspondiente
// // %d, %i	Conversión decimal con signo de un entero
// // %p	Dirección de memoria (puntero)
// // %s	Cadena de caracteres (terminada en '\0')
