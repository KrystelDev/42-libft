/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:39:16 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 16:40:32 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_calloc.c"
// #include "ft_strlen.c"
// #include "ft_strdup.c"
#include "libft.h"

static int	ft_nbrlen(int n)
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
	itoa = ft_calloc(ft_nbrlen(n) + 1, sizeof(char));
	if (!itoa)
		return (NULL);
	i = ft_nbrlen(n) - 1;
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
// 42 Control exepción "-2147483648"
// 43 Al saber el tamanno de digitos, puedo pedir memoria
// 54 A partir de aquí encontrar los numeros.
// 54 Como encuentro primero la unidades, 
// despues las decentas etc.. necesito ir de atrás adelante.
// #include <stdio.h>
// int main (void)
// {
// 	char *result = ft_itoa(-2147483648);
//  	printf("%s\n", result);
// 	result = ft_itoa(2147483647);
//  	printf("%s\n", result);
// 	result = ft_itoa(0);
//  	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }