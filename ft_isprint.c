/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/16 14:11:52 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (c < ' ' || c > '~')
		result = 0;
	return (result);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str;
//     int is_printable;

//     str = "	";
//     is_printable = 2;

//     printf ("MAIN -- Antes de cambiar el valor is_printable vale: ");
//     printf("%d", is_printable);
//     printf ("\n");
//     printf ("MAIN -- Antes de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");

//     is_printable = ft_ft_isprint(str);

//     printf ("MAIN -- Despues de cambiar el valor is_printable vale: ");
//     printf("%d", is_printable);
//     printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");
// }