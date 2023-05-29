/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:19:36 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 13:54:45 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	// char	*dest = "a";
// 	// const char	src[] = "lorem";
// 	char	*dest2 = "a";
// 	const char	src2[] = "lorem";
// 	size_t	n = 15;
// 	// printf("recplica: %zu\n", ft_strlcat(dest, src, n));
// 	// printf("recplica: %s\n", dest);
// 	printf("original: %zu\n", strlcat(dest2, src2, n));
// 	printf("original: %s\n", dest2);
// }
// test
// Error in test 9: ft_strlcat("pqrstuvwxyz", "abcd", 20): Memory problems!
