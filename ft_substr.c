/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:17:06 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/23 15:30:55 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_calloc.c"
// #include "ft_strlcpy.c"
// #include "ft_strdup.c"
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	s += start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substring = ft_calloc(len + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s, len + 1);
	return (substring);
}
// #include <string.h>
// int main (void)
// {
// 	char *str = "01234";
//  	size_t size = 10;
//  	char *ret = ft_substr(str, 10, size);
//  	if (!strncmp(ret, "", 1))
//  	{
//  		printf("TEST_SUCCESS");
//  	} else
// 	{
// 		printf("TEST_FAILED");
// 	}
//  	free(ret);
// }