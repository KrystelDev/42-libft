/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:18:29 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 00:11:39 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				q_s1;
	int				q_s2;
	int				q;
	unsigned int	i;

	q_s1 = 0;
	q_s2 = 0;
	i = 0;
	q = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			if (i == n)
				i--;
			q_s1 = s1[i];
			q_s2 = s2[i];
			q = q_s1 - q_s2;
			return (q);
		}
		i++;
	}
	return (q);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s1[20] = "Hollayiyuiyui";
//     char s2[20] = "Hollayi\200yuiyu2";
//     unsigned int n = 156456464;
//     int int_strcmp = strncmp(s1, s2, n); 
//     printf("MAIN - strncmp: %d", int_strcmp);
//     int_strcmp = 0;
// 	printf("\n");
//     int_strcmp = ft_strncmp(s1, s2, n);
//     printf("MAIN - ft_strncmp: %d", int_strcmp);
// 	printf("\n");
// }