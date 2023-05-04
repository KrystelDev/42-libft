/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:57:58 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/04 18:32:20 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *str = (char *)s;
	(size_t)prueba = ft_strlen(str);
	if(n == prueba)
		printf("entra");
	printf("%d\n", prueba);
}

int main(void)
{
    printf ("MAIN -- Original: ");
    printf("%d\n", memset("hola", 49, 2));
    printf ("MAIN -- FTcopy: ");
    printf("%d\n", ft_memset("hola", 49, 2));
}