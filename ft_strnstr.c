/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:28:13 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 13:12:09 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	n_to_find;
	size_t	i;
	size_t	j;

	n_to_find = ft_strlen(s2);
	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		while (i + j < n && s1[i + j] && s2[j] && s1[i + j] == s2[j])
		{
			j++;
		}
		if (j == n_to_find)
			return ((char *)s1 + i);
		j = 0;
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int main(void)
// {
//     const char *str1 = "Hello, world!";
//     const char *str2 = "world";
//     size_t n = 14;
//     char *result_ft = ft_strnstr(str1, str2, n);
//     char *result_original = strnstr(str1, str2, n);
//     printf("Result (ft_strnstr): %s\n", result_ft);
//     printf("Result (strnstr): %s\n", result_original);
//     if (result_ft == result_original 
// 			|| (result_ft && result_original 
// 			&& strcmp(result_ft, result_original) == 0))
//     	printf("ft_strnstr funciona igual que strnstr.\n");
//     else
//         printf("ft_strnstr no funciona igual que strnstr.\n");
//     return 0;
// }