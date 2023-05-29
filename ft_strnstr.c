/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:28:13 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 13:51:50 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	n_to_find;
	size_t	i;
	size_t	j;

	n_to_find = ft_strlen(s2);
	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		while (i + j < n && s1[i + j] && s2[j] && s1[i + j] == s2[j])
		{
			j++;
		}
		if (j == n_to_find)
			return ((char *)s1 + i);
		j = 0;
		i++;
	}
	return (0);
}
