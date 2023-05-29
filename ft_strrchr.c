/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:09:23 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 13:50:15 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s) - 1;
	while (count > -1 && s[count] != (char)c)
		count--;
	if (count > -1 && s[count] == (char)c)
		return (&(((char *)s)[count]));
	if ('\0' == (char)c)
		return (&(((char *)s)[ft_strlen(s)]));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char *cadena = "the cake is a lie !\0"; 
// 	char caracter1 = 'e'; 
// 	char caracter2 = 'z';
// 	printf("ft_strrchr(cadena, caracter1): %p\n", 
// ft_strrchr(cadena, caracter1));
// 	printf("strrchr(cadena, caracter1): %p\n", strrchr(cadena, caracter1));
// 	printf("ft_strrchr(cadena, caracter2): %p\n", 
// ft_strrchr(cadena, caracter2));
// 	printf("strrchr(cadena, caracter2): %p\n", strrchr(cadena, caracter2));
//    if (ft_strrchr(cadena, caracter1) == strrchr(cadena, caracter1))
//    {
// 	printf("SUCCES\n");
//    }
//    else
//    {
// 	printf("CACA T.T\n");
//    }
//    if (ft_strrchr(cadena, caracter2) == strrchr(cadena, caracter2))
//    {
// 	printf("SUCCES\n");
//    }
//    else
//    {
// 	printf("CACA T.T\n");
//    }
//    return (0);
// } 