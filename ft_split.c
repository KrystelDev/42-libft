/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:24:51 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 16:40:35 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	q_palabras(char const *s, char c)
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

static size_t	ft_paraula_len(char const *s, char c)
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

static void	ft_clean(char **split, size_t q_palabras)
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
	int		palabra;
	char	**split;

	split = (char **)ft_calloc(q_palabras(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	palabra = 0;
	while (*s)
	{
		if (*s != c && *s != '\0')
		{
			split[palabra] = ft_substr(s, 0, ft_paraula_len(s, c));
			if (split[palabra] == NULL)
			{
				ft_clean(split, palabra);
				return (NULL);
			}
			s = s + ft_paraula_len(s, c) - 1;
			palabra++;
		}
		s++;
	}
	return (split);
}

// int main()
// {
// 	char *s = "Hola,patata,donnetes,berenjena,.";
// 	char **result;
// 	result = ft_split(s, ',');
// 	if (result == NULL)
// 		return 1;
// 	// Imprimir las palabras resultantes
// 	printf("Palabras resultantes:\n");
// 	size_t i = 0;
// 	while (result[i] != NULL)
// 		printf("%s\n", result[i++]);
// 	// Liberar la memoria asignada
// 	ft_clean(result, 5);
// 	return 0;
// }
// 71 Reservo memoria necesaria del Array de palabras
// 74 Empezamos en cero (principio de primera palabra)
// 		hasta el final de la primera etc.