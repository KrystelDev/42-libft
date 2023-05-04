/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/23 16:22:42 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			result = 0;
			return (result);
		}
		i++;
	}
	return (result);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str;
//     int is_numeric;

//     str = "";
//     is_numeric = 2;

//     printf ("MAIN -- Antes de cambiar el valor is_numeric vale: ");
//     printf("%d", is_numeric);
//     printf ("\n");
//     printf ("MAIN -- Antes de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");

//     is_numeric = ft_str_is_numeric(str);

//     printf ("MAIN -- Despues de cambiar el valor is_numeric vale: ");
//     printf("%d", is_numeric);
//     printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");
// }