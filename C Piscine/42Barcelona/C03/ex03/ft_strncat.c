/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:19:08 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 19:10:48 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s1[20] = "Rasca\0";
//     char s2[20] = "cielo\0";
//     unsigned int nb = 6;
//     char *char_strncat = strncat(s1, s2, nb); 
//     printf("MAIN - strcat: %s", char_strncat);
//     char_strncat = "";
// 	printf("\n");
//     char dest[20] = "Rasca\0";
//     char src[20] = "cielo\0";
//     char *char_ft_strncat = ft_strncat(dest, src, nb);
//     printf("MAIN - ft_strncat: %s", char_ft_strncat);
// 	printf("\n");
// }