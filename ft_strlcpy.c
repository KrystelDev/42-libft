/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 02:07:20 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/04 18:32:25 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char ropa[20] = "Calcetines";
//     char prenda[20];
//     prenda[0] = '\0';
//     unsigned int strlcpy;
//     printf("MAIN- ANTES DE STRLCPY\n");
//     printf("Cadena original: %s \n", ropa);
//     // Se copia la cadena "ropa" en "prenda"
//     strlcpy = strlcpy(prenda, ropa, 10);
//     printf("MAIN-  DESPUES DE STRLCPY\n");
//     printf("Cadena copiada con strlcpy: %s \n", prenda);
//     printf("Numero de strlcpy: %d \n", strlcpy);
//     char src[20] = "Calcetines";
//     char dest[20];
//     dest[0] = '\0';
//     printf("MAIN- ANTES DE FT_STRLCPY\n");
//     printf("Cadena original: %s \n", src);
//     // Se copia la cadena "src" en "dest"
//     strlcpy = ft_strlcpy(dest, src, 10);
//     printf("MAIN- DESPUES DE FT_STRLCPY\n");
//     printf("Cadena copiada con ft_strlcpy: %s \n", dest);
//     printf("Numero de strlcpy: %d \n", strlcpy);
//     return (0);
// }