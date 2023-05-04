/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:18:51 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 00:18:08 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
//     char    s1[20] = "Rasca\0";
//     char    s2[20] = "cielo\0";
//     char *char_strcat = strcat(s1, s2); 
//     printf("MAIN - strcat: %s", char_strcat);
//     char_strcat = "";
// 	printf("\n");
//     char    dest[20] = "Rasca\0";
//     char    src[20] = "cielo\0";
//     char    *char_ft_strcat = ft_strcat(dest, src);
//     printf("MAIN - ft_strcat: %s", char_ft_strcat);
// 	printf("\n");
// }