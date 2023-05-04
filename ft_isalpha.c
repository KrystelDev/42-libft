/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/23 16:16:10 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}
// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     int my_is_alpha;

//     my_is_alpha = '#';

//     printf ("MAIN -- Original: ");
//     printf("%d", isalpha(my_is_alpha));
//     printf ("\n");
//     printf ("MAIN -- FTcopy: ");
//     printf("%d", ft_isalpha(my_is_alpha));
//     printf ("\n");
// }