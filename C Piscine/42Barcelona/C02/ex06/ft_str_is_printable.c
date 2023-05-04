/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/23 16:30:52 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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
//     int is_printable;

//     str = "	";
//     is_printable = 2;

//     printf ("MAIN -- Antes de cambiar el valor is_printable vale: ");
//     printf("%d", is_printable);
//     printf ("\n");
//     printf ("MAIN -- Antes de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");

//     is_printable = ft_str_is_printable(str);

//     printf ("MAIN -- Despues de cambiar el valor is_printable vale: ");
//     printf("%d", is_printable);
//     printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");
// }