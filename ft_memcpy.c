/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:32:07 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/24 18:25:57 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char str[50] = "Hola, mundo!";
//     // memcpy(str + 6, str, strlen(str) + 1);
//     // printf("\nAntes memcpy(): %s\n", str);
//     // Fill 8 characters starting from str[13] with '.'
// 	printf("Despues memmove(): %s\n", memmove(str + 6, str, strlen(str) + 1));
//     printf("Despues memcpy(): %s\n", memcpy(str + 6, str, strlen(str) + 1));
// 	// char strFT[50] = "HOla5678";
//     // printf("\nAntes FTmemcpy(): %s\n", strFT);
//     // Fill 8 characters starting from str[13] with '.'
//     // ft_memcpy(strFT + 5, strFT, 9);
//     printf("Despues FTmemcpy(): %s\n", 
// ft_memcpy(str + 6, str, strlen(str) + 1));
//     return 0;
// }