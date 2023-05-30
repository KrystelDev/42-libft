/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:11:47 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 15:38:59 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	while (++i < ft_strlen(s))
		f(i, &s[i]);
}

// // Función auxiliar para imprimir el índice y el carácter en cada posición
// void print_index_and_char(unsigned int index, char *c)
// {
// 	printf("Índice: %u, Carácter: %c\n", index, *c);
// }
// int main()
// {
// 	char cadena[] = "Hola";
// 	// Usando ft_striteri para imprimir el índice y el carácter en cada posición
// 	ft_striteri(cadena, print_index_and_char);
// 	return 0;
// }