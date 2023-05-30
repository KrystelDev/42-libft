/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:24:51 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 10:35:35 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	static_q_palabras(char const *s, char c)
{
	size_t	i;
	int		count;

	if (s == NULL || ft_strlen(s) == 0)
		return (0);
	count = 0;
	i = 0;
	if (s[i] != c)
	{
		count++;
		i++;
	}
	while (i < ft_strlen(s) - 1)
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

size_t	static_ft_strlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s)-1)
	{
		if (s[i] != c && s[i + 1] == c)
		{
			return (i + 1);
		}	
		i++;
	}
	return (ft_strlen(s));
}

void	static_ft_clean(char **split, size_t q_palabras)
{
	while (q_palabras > 0)
	{
		free(split[q_palabras - 1]);
		q_palabras--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	int		q_palabras;
	char	**split;

	split = (char **)ft_calloc(static_q_palabras(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	q_palabras = 0;
	while (*s)
	{
		if (*s != c && *s != '\0')
		{
			split[q_palabras] = ft_substr(s, 0, static_ft_strlen(s, c));
			if (split[q_palabras] == NULL)
			{
				static_ft_clean(split, q_palabras);
				return (NULL);
			}
			s = s + static_ft_strlen(s, c) - 1;
			q_palabras++;
		}
		s++;
	}
	return (split);
}

// int	main(void)
// {
// 	printf(">hello!..\n");
// 	ft_split("hello!", ' ');
// 	split("hello!", ' ');
// 	return(0);
// }
// 71 Reservo memoria necesaria del Array de palabras
// 74 Empezamos en cero (principio de primera palabra)
// 		hasta el final de la primera etc.