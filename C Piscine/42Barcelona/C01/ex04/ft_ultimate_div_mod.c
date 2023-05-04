/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:43:21 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/17 00:43:25 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividendo;
	int	dividor;

	dividendo = *a;
	dividor = *b;
	*a = dividendo / dividor;
	*b = dividendo % dividor;
}

// #include <stdio.h>
// int main(void)
// {
//     int num1 = 42;
//     int num2 = 10;
// 	int *a = &num1;
//     int *b = &num2;

// 	// imprimir abans de la diivicio
// 	printf ("Antes de hacer la division: ");
//     printf ("\n");
// 	printf("valor de a, %i", *a);
// 	printf ("\n");
//     printf("valor de b, %i", *b);
//     printf ("\n");

// 	ft_ultimate_div_mod(a, b);
// 	//imprimir despres de la diivicio
// 	printf ("Despues de hacer la division: ");
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