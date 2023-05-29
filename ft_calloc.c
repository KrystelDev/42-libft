/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:50:10 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/25 17:53:06 by kryrodri         ###   ########.fr       */
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
