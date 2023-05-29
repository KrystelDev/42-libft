/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:09:58 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 13:57:10 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (count < ft_strlen(s) && s[count] != (char)c)
		count++;
	if (count <= ft_strlen(s) && s[count] == (char)c)
		return (&(((char *)s)[count]));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//    const char *cadena = "teste0"; 
//    char caracter1 = '\0'; 
//    char caracter2 = 48;
//    printf("ft_strchr(cadena, caracter1): %s\n", 
// ft_strchr(cadena, caracter1));
// 	printf("strchr(cadena, caracter1): %s\n", strchr(cadena, caracter1));
//    if (ft_strchr(cadena, caracter1) == strchr(cadena, caracter1))
//    {
// 	printf("SUCCES\n");
//    }
//    else
//    {
// 	printf("CACA T.T\n");
//    }
//    if (ft_strchr(cadena, caracter2) == strchr(cadena, caracter2))
//    {
// 	printf("SUCCES\n");
//    }
//    else
//    {
// 	printf("CACA T.T\n");
//    }
//    return (0);
// } 