/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:18:16 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 13:57:37 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && ((unsigned char *)str1)[i] == ((unsigned char *)str2)[i])
	{
		if (i == n - 1)
			return (0);
		i++;
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//    const char *str1="abcd";
//    const char *str2="ABCDEF";
//    int ret;
//    ret = memcmp(str1, str2, 5);
//    if(ret > 0)
//    {
//       printf("ORI str2 es mayor str1\n");
//    }
//    else if(ret > 0) 
//    {
//       printf("ORI str1 es menor str2\n");
//    }
//    else 
//    {
//       printf("ORI str1 es igual str2\n");
//    }
//     ret = ft_memcmp(str1, str2, 5);
//    if(ret > 0)
//    {
//       printf("REP str2 es mayor str1\n");
//    }
//    else if(ret > 0) 
//    {
//       printf("REP str1 es menor str2\n");
//    }
//    else 
//    {
//       printf("REP str1 es igual str2\n");
//    }
//    return(0);
// }