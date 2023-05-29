/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:13:53 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 13:38:21 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && ((char *)s)[count] != (char)c)
		count++;
	if (count < n && ((char *)s)[count] == (char)c)
		return ((void *)((char *)s + count));
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// { 
//    const char *s = "bonjourno";
//    printf("ORI El resto de s despues del caracter r 
// encontrado es %s\n", memchr( s, 'n', 3) );
//    printf("s: %s\n", s); 
//    printf("REP El resto de s despues del caracter r encontrado 
// es %s\n", ft_memchr( s, 'n', 3) );
//    printf("s: %s\n", s);
//    return (0);
// } 