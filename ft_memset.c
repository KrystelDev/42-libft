/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:57:58 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 13:23:10 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

// 39 se hace este casteo para poder sobreescribir
//	permite el acceso a nivel de byte dentro del bloque de memoria.
// #include <string.h>
// int main()
// {
//     char str[50] = "HOla";
//     printf("\nAntes memset(): %s\n", str);
//     // Fill 8 characters starting from str[13] with '.'
//     memset(str + 1, 'o', 1*sizeof(char));
//     printf("Despues memset():  %s\n", str);
// 	char strFT[50] = "HOla";
//     printf("\nAntes FTmemset(): %s\n", strFT);
//     // Fill 8 characters starting from str[13] with '.'
//     ft_memset(strFT + 1, 'o', 1*sizeof(char));
//     printf("Despues FTmemset():  %s\n", strFT);
//     return 0;
// }