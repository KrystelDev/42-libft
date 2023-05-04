/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:37:47 by kryrodri          #+#    #+#             */
/*   Updated: 2023/04/14 13:50:40 by kryrodri         ###   ########.fr       */
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
// 	int a = 4;
//     int b = 2;
// 	int *div = &a;
// 	int *mod = &b;

//     printf ("antes de cambiar los valores vale: ");
//     printf ("\n");
// 	printf("div: %i", *div);
// 	printf ("\n");
// 	printf("mod: %i", *mod);
// 	printf ("\n");

// 	ft_div_mod(a, b, div, mod);

// 	printf ("despues de cambiar los valores vale: ");
//     printf ("\n");
// 	printf("div: %i", *div);
// 	printf ("\n");
// 	printf("mod: %i", *mod);
// 	printf ("\n");

// }
// // %c	Imprime el carácter ASCII correspondiente
// // %d, %i	Conversión decimal con signo de un entero
// // %p	Dirección de memoria (puntero)
// // %s	Cadena de caracteres (terminada en '\0')