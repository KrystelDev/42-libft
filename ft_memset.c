/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:57:58 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/05 16:19:58 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

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