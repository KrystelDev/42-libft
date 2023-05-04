/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:42:52 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/17 00:42:56 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main(void)
// {
//     int a = 42;
//     int b = 10;
//     int num1 = 0;
//     int num2 = 0;
// 	int *div = &num1;
//     int *mod = &num2;

// 	// imprimir abans del  intercanvi
// 	printf ("Antes de hacer la division: ");
//     printf ("\n");
// 	printf("valor de a, %i", a);
// 	printf ("\n");
//     printf("valor de b, %i", b);
//     printf ("\n");
//     printf("valor de num1(div), %i", num1);
// 	printf ("\n");
//     printf("valor de num2(mod), %i", num2);
//     printf ("\n");

// 	ft_div_mod(a, b, div, mod);
// 	//imprimir despres del  intercanvi
// 	printf ("Despues de hacer la division: ");
//     printf ("\n");
// 	printf("valor de a, %i", a);
// 	printf ("\n");
//     printf("valor de b, %i", b);
//     printf ("\n");
//     printf("valor de num1(div), %i", num1);
// 	printf ("\n");
//     printf("valor de num2(mod), %i", num2);
//     printf ("\n");
// }

// // %c	Imprime el carácter ASCII correspondiente
// // %d, %i	Conversión decimal con signo de un entero
// // %p	Dirección de memoria (puntero)
// // %s	Cadena de caracteres (terminada en '\0')