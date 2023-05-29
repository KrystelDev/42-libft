/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:19:18 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/23 15:31:02 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include <string.h>

char	*ft_strdup(char *s)
{
	char	*copia_cpy;
	size_t	i;

	i = -1;
	copia_cpy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (copia_cpy == NULL)
	{
		return (NULL);
	}
	while (s[++i])
		copia_cpy[i] = s[i];
	copia_cpy[i] = '\0';
	return (copia_cpy);
}

// int main (void)
// {
// 	char *str;
//  	char *tmp = "I malloc so I am.";
// 	printf("tmp: %s\n", tmp);
//  	str = ft_strdup(tmp);
// 	printf("str: %s\n", str);
//  	if (strcmp(str, tmp))
//  		printf("TEST_FAILED\n");
// 	else
// 		printf("TEST_SUCCESS\n");
//  	free(str);
// 	return(0);
// }