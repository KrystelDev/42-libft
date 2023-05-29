/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:24:51 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/29 15:45:14 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	static_q_palabras(char const *s, char c)
{
	size_t i;
	int count;

	count = 0;
	i = 0;
	if (s[i] != c)
	{
		count++;
		i++;
	}
	while (i < ft_strlen(s)-1)
	{
		if(s[i] == c && s[i+1] != c)
			count++;
		i++;
	}
	return (count);
}
size_t	static_ft_strlen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (i < ft_strlen(s)-1)
	{
		if (s[i] != c && s[i+1] == c)
		{
			return (i+1);
		}	
		i++;
	}
	return (ft_strlen(s));
}

char	**ft_split(char const *s, char c)
{
	int 	q_palabras;
	char	**split;
	size_t 	i;
	int 	max_palabras;

// Calculo cuantas palabras hay en s:
	q_palabras = 0;
	if (ft_strlen(s))
		q_palabras = static_q_palabras(s, c);
// Reservo memoria necesaria del Array de palabras:
	split = (char **)ft_calloc(q_palabras + 1, sizeof(char*));
	if (!split)
		return (NULL);
	if(q_palabras)
	{
		// printf( "Sucio s: .%s.\n", s);
// Empezamos en cero (principio de primera palabra)hasta el final de la primera etc.
		max_palabras = q_palabras;
		q_palabras = 0;
		// printf( "clean s: .%s.\n", s);
		while (ft_strlen(s))
		{
			i = 0;
			if(*s != c && *s != '\0' && q_palabras < max_palabras)
			{
				i = static_ft_strlen(s, c);
				// printf("i: %zu\n", i);
				// printf("static_ft_strlen(s, c): %zu\n", static_ft_strlen(s, c));
				split[q_palabras] = ft_substr(s, 0, i);
				// printf( "split[q_palabras]: %s.\n", split[q_palabras]);
				// printf( "En i ->s: .%zu.\n", i);
				s = s + i;
				// printf( "En s+i ->s: .%s.\n", s);
				q_palabras++;
			}
			s++;
		}
	}
	// printf( "FIN split:\n%s-\n%s-\n%s-\n",split[0], split[1], split[2]);
	return (split);
}

// int	main(void)
// {
// 	printf(">hello!..\n");
// 	ft_split("hello!", ' ');
// 	split("hello!", ' ');
// 	return(0);
// }