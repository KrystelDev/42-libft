/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:25:01 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/16 14:11:48 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     int myisdigit;

//     myisdigit = '0';

//     printf ("MAIN -- Original: ");
//     printf("%d", isdigit(myisdigit));
//     printf ("\n");
//     printf ("MAIN -- FTcopy: ");
//     printf("%d", ft_isdigit(myisdigit));
//     printf ("\n");
// 	return(0);
// }