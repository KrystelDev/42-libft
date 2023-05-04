/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/23 16:28:36 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
//     int is_uppercase;

//     str = "";
//     is_uppercase = 2;

//     printf ("MAIN -- Antes de cambiar el valor is_uppercase vale: ");
//     printf("%d", is_uppercase);
//     printf ("\n");
//     printf ("MAIN -- Antes de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");

//     is_uppercase = ft_str_is_uppercase(str);

//     printf ("MAIN -- Despues de cambiar el valor is_uppercase vale: ");
//     printf("%d", is_uppercase);
//     printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");
// }