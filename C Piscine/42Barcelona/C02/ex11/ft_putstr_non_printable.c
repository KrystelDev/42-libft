/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 02:48:37 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/28 20:21:11 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			write(1, "\\", 1);
			hex[0] = "0123456789abcdef"[(unsigned char)*str / 16];
			hex[1] = "0123456789abcdef"[(unsigned char)*str % 16];
			hex[2] = '\0';
			write(1, hex, 2);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

// int main(void)
// {
//     char *str = "Cou\200c\bou\ntu v\fas bien ?";
//     ft_putstr_non_printable(str);
//     write(1, "\n", 1);
//     return (0);
// }
// APUNTES
// Para convertir un valor de carácter a dos dígitos hexadecimales, 
// 1- necesitas obtener los dos dígitos hexadecimales individuales. 
//     Puedes hacer esto dividiendo el valor del carácter entre 16 
// y obteniendo el cociente y el resto. 
// 2-, convierte cada valor en su representación hexadecimal. 
// 		Si el valor es menor que 10, simplemente agrega '0' 
// 		a ese valor 
// 		para obtener su representación en dígito. 
//     i el valor es mayor o igual a 10, entonces necesitas usar 'a' 
// para representar 10, 'b' para 11, y así sucesivamente.
// Por ejemplo, si el valor del carácter es 202, 
// entonces para obtener sus dígitos hexadecimales individuales,
//  divides 202 por 16, lo que da como resultado un 
// cociente de 12 y un resto de 10. 
//  Luego, conviertes 12 a su representación hexadecimal, que es 'c', 
//  y conviertes 10 a su representación hexadecimal, que es 'a'. 
//  Entonces, la representación hexadecimal completa de 202 es 'ca'.