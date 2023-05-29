/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:02:27 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/24 23:33:34 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_strchr.c"
// #include "ft_strrchr.c"
// #include "ft_strlen.c"
// #include "ft_substr.c"
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		strtrim_init;
	int		strtrim_finish;

	strtrim_init = 0;
	while (ft_strchr(set, s1[strtrim_init]) && s1[strtrim_init])
	{
		strtrim_init++;
	}
	strtrim_finish = ft_strlen(s1) - 1;
	while (strtrim_finish >= 0 && ft_strrchr(set, s1[strtrim_finish]))
	{
		strtrim_finish--;
	}
	return (ft_substr(s1, strtrim_init, strtrim_finish - strtrim_init + 1));
}

// int	main(void)
// {
// 	char const *s1 = "   Hello, world!   ";
// 	char const *set = " !H";
// 	// Llamada a ft_strtrim
// 	char *trimmed_str = ft_strtrim(s1, set);
// 	printf("Cadena original: \"%s\"\n", s1);
// 	printf("Cadena recortada: \"%s\"\n", trimmed_str);
// 	// Liberar la memoria asignada por ft_strtrim
// 	free(trimmed_str);
// 	return 0;
// }