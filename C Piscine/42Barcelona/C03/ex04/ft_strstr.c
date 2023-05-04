/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:19:20 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 19:11:44 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		n_to_find;
	int		i;
	int		j;

	n_to_find = 0;
	i = 0;
	j = 0;
	if (*str == '\0' && *to_find == '\0')
		return (str);
	while (to_find[n_to_find] != '\0')
	{
		n_to_find++;
	}
	while (str[i] != '\0')
	{
		while (j < n_to_find && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == n_to_find)
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char    *large_string = "fggh";
// 	char    *small_string = "";
// 	char    *ptr_strstr;
// 	ptr_strstr = strstr(large_string, small_string);
//     printf("MAIN - strstr: %s\n", ptr_strstr);
//     printf("MAIN - strstr: %s\n", large_string);
//     printf("MAIN - strstr: %s\n", small_string);
//     char    *large_char = "fggh";
// 	char    *small_char = "";
// 	char    *ptr_ft_strstr;
//     ptr_ft_strstr = ft_strstr(large_char, small_char);
//     printf("MAIN - ft_strstr: %s\n", ptr_ft_strstr);
//     printf("MAIN - ft_strstr: %s\n", large_char);
//     printf("MAIN - ft_strstr: %s\n", small_char);
// 	printf("%s", ft_strstr(large_char, small_char));
//     return (0);
// }