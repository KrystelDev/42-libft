/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:51:45 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 15:45:03 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;

	new_string = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_strlcat(new_string, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_string, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (new_string);
}

// int main()
// {
// 	char *s1 = "Hello, ";
// 	char *s2 = "world!";
// 	char *result;
// 	// Usando ft_strjoin para concatenar las cadenas s1 y s2
// 	result = ft_strjoin(s1, s2);
// 	if (result == NULL)
// 	{
// 		printf("Error: No se pudo asignar memoria.\n");
// 		return 1;
// 	}
// 	// Imprimir el resultado de la concatenación
// 	printf("Resultado: %s\n", result);
// 	// Liberar la memoria asignada
// 	free(result);
// 	return 0;
// }