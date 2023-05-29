/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:39:16 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/25 15:16:20 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_calloc.c"
// #include "ft_strlen.c"
// #include "ft_strdup.c"
#include "libft.h"

int	static_ft_nbrlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	itoa = ft_calloc(static_ft_nbrlen(n) + 1, sizeof(char));
	if (!itoa)
		return (NULL);
	i = static_ft_nbrlen(n) - 1;
	if (n < 0)
	{
		itoa[0] = '-';
		n = n * (-1);
	}
	while (n >= 10)
	{
		itoa[i--] = ((n - (n / 10 * 10)) % 10 + '0');
		n = (n - (n - (n / 10 * 10))) / 10;
	}
	itoa[i] = (n % 10 + '0');
	return (itoa);
}
// 51 Copia la cadena "-2147483648" a la variable itoa
// 64 A partir de aquí encontrar los numeros.
// 68 Como encuentro primero la unidades, 
// despues las decentas etc.. necesito darle la vuelta
// #include <stdio.h>
// int main (void)
// {
// 	char *result = ft_itoa(374);
//  	printf("%s\n", result);
// 	free(result);
	// char *result = ft_itoa(-21);
	// printf("%s\n", ft_itoa(-21));
	// free(result);
	// result = ft_itoa(21);
	// printf("%s\n", result);
	// free(result);
	// result = ft_itoa(-4);
	// printf("%s\n", result);
	// free(result);
	// result = ft_itoa(0);
	// printf("%s\n", result);
	// free(result);
	// result = ft_itoa(-2147483648);
	// printf("%s\n", result);
	// free(result);
//  return (0);
// }