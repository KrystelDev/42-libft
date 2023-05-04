/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/23 16:25:51 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
//     int is_lowercase;

//     str = "";
//     is_lowercase = 2;

//     printf ("MAIN -- Antes de cambiar el valor is_lowercase vale: ");
//     printf("%d", is_lowercase);
//     printf ("\n");
//     printf ("MAIN -- Antes de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");

//     is_lowercase = ft_str_is_lowercase(str);

//     printf ("MAIN -- Despues de cambiar el valor is_lowercase vale: ");
//     printf("%d", is_lowercase);
//     printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");
// }