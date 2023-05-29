/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:14:30 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/15 12:33:46 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[] = "0123456";
// 	printf("original: %s\n", str);
// 	printf("destino: %s\n", str+ 1);
//     memmove(str + 1, str, 2);
// 	printf("memmove: %s\n", str);
// 	char str2[] = "0123456";
// 	printf("original2: %s\n", str2);
// 	printf("destino2: %s\n", str2+ 1);
//     ft_memmove(str2 + 1, str2, 2);
//     printf("ft_memmove: %s\n", str2);
//     return 0;
// }
// primero deja el desnito tal cua es.
// y el resto del espacio que queda segun n se rellano con el original. 