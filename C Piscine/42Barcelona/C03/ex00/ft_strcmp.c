/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:18:04 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/28 23:59:10 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	q_s1;
	int	q_s2;
	int	q;
	int	i;

	q_s1 = 0;
	q_s2 = 0;
	i = 0;
	q = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			q_s1 = s1[i];
			q_s2 = s2[i];
			q = q_s1 - q_s2;
			return (q);
		}
		i++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char s1[20] = "Hola";
//     char s2[20] = "Hola";
//     int int_strcmp = strcmp(s1, s2); 
//     printf("MAIN - strcmp: %d", int_strcmp);
//     int_strcmp = 0;
// 	printf("\n");
//     int_strcmp = ft_strcmp(s1, s2);
//     printf("MAIN - ft_strcmp: %d", int_strcmp);
// 	printf("\n");
// }