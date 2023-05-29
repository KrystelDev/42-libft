/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:44:19 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/23 15:31:05 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
// int main(void)
// {
//     const char *str;
//     str = "o \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	printf("str: %s\n", str);
// 	printf("ft_strlen(str): %zu\n", ft_strlen(str));
// 	printf("strlen(str): %zu\n", strlen(str));
// 	printf("str: %s\n", str);
// }