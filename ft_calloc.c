/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:50:10 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 15:29:21 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_bzero.c"
#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	char	*copia_cpy;

	copia_cpy = malloc(num_elements * element_size);
	if (copia_cpy == NULL)
	{
		return (NULL);
	}
	ft_bzero(copia_cpy, num_elements * element_size);
	return (copia_cpy);
}

// int main()
// {
// 	int *numbers;
// 	int num_elements = 5;
// 	numbers = (int*)ft_calloc(num_elements, sizeof(int));
// 	if (numbers == NULL)
// 	{
// 		printf("Error: No se pudo asignar memoria.\n");
// 		return (1);
// 	}
// 	// Imprimir cada elemento
// 	printf("Números asignados: ");
// 	int i = 0;
// 	while (i++ < num_elements)
// 		printf("%d ", numbers[i]);
// 	// Liberar la memoria asignada
// 	free(numbers);
// 	return 0;
// }