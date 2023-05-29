/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 02:07:20 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/15 14:40:37 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (dstsize > 0)
	{
		if (dstsize > ft_strlen(src))
		{
			while (src[++i] != '\0')
				dst[i] = src[i];
			dst[i] = '\0';
		}
		else
		{
			while (++i < (dstsize - 1))
				dst[i] = src[i];
			dst[i] = '\0';
		}
	}
	return (ft_strlen(src));
}

/*
25 si tenemos mas espacio de tamanno de src
31 copia hasta dstsize-1, y al final siempre un null
36 siempre devuelve la grandaria de src
*/
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	dest[10];
// 	const char	src[] = "hola\0";
// 	char	dest2[10];
// 	const char	src2[] = "hola\0";
// 	size_t	n = 0;
// 	printf("recplica: %zu\n", ft_strlcpy(dest, src, n));
// 	printf("recplica: %s\n", dest);
// 	printf("original: %zu\n", strlcpy(dest2, src2, n));
// 	printf("original: %s\n", dest2);
// }