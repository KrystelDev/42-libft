/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:34:37 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/20 13:34:41 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
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

// #include <stdio.h>
// int main(void)
// {
//     int tab[3];
// 	int size;
// 	int num1 = 1;
// 	int num2 = 2;
// 	int num3 = 3;

// 	tab[0] = num1;
// 	tab[1] = num2;
// 	tab[2] = num3;
// 	size = 3;

// 	// imprimir abans de la diivicio
// 	printf ("Antes de hacer la reversion: ");
//     printf ("\n");
// 	printf("valor de tab[0], %i", tab[0]);
// 	printf ("\n");
// 	printf("valor de tab[1], %i", tab[1]);
// 	printf ("\n");
// 	printf("valor de tab[2], %i", tab[2]);
// 	printf ("\n");

// 	ft_rev_int_tab(tab, size);
// 	//imprimir despres de la diivicio
// 	printf ("Despues de hacer la reversion: ");
//     printf ("\n");
// 	printf("valor de tab[0], %i", tab[0]);
// 	printf ("\n");
// 	printf("valor de tab[1], %i", tab[1]);
// 	printf ("\n");
// 	printf("valor de tab[2], %i", tab[2]);
// 	printf ("\n");
// 	return (0);
// }

// // %c	Imprime el carácter ASCII correspondiente
// // %d, %i	Conversión decimal con signo de un entero
// // %p	Dirección de memoria (puntero)
// // %s	Cadena de caracteres (terminada en '\0')