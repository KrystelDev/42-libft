/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/23 16:33:35 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int main(void)
// {
//     char str[5]= "Hola\0";
//     printf ("MAIN -- Antes de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");

//     *str = *ft_strupcase(str);

//     printf ("MAIN -- Despues de cambiar el valor, str vale: ");
//     printf("%s", str);
//     printf ("\n");
// }