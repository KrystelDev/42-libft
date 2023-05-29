/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:09:41 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/25 17:50:18 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*char_s;
	unsigned int	i;

	char_s = ft_strdup((char *)s);
	if (!char_s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(char_s))
	{
		char_s[i] = f(i, s[i]);
		i++;
	}
	return (char_s);
}

// int 	main(void)
// {
// 	char *prueba = ft_strmapi("abcd0 ", {(i, -1) => i + -1})
// 	// expected: "aceg4%", got: "abcd0 "
// }