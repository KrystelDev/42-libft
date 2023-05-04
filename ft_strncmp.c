/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:04:24 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/04 15:09:16 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;
	if (n == 0)
		return (0);

	while ((i < n) && (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	
	// printf("FT: %c\n", s1[i-1]);
	// printf("FT: %c\n", s2[i-1]);
	return ((unsigned char)s1[i-1] - (unsigned char)s2[i-1]);

}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s1[20] = "abcdef";
//     char s2[20] = "abcdefghijklmnop";
//     unsigned int n = 6;
//     int int_strcmp = strncmp(s1, s2, n); 
//     printf("MAIN - strncmp: %d", int_strcmp);
//     int_strcmp = 0;
// 	printf("\n");
//     int_strcmp = ft_strncmp(s1, s2, n);
//     printf("MAIN - ft_strncmp: %d", int_strcmp);
// 	printf("\n");
// }