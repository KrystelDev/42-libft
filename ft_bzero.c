/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:48:09 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/30 15:29:55 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	char	*str;
// 	size_t	i;

// 	str = (char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		str[i] = '\0';
// 		i++;
// 	}
// 	return ;
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		((char *)s)[i] = '\0';
// 		i++;
// 	}
// }

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	char buffer[10]= "Hello";
// 	printf("Antes de bzero: %s\n", buffer);
// 	ft_bzero(buffer, sizeof(buffer));
// 	printf("Después de bzero: %s\n", buffer);	
// 	return (0);
// }