/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:22:05 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/04 17:43:55 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if (c < 0 || c > 127)
    {
        return (0);
    }
    return (1);
}
// #include <stdio.h>
// int main(void)
// {
//     int my_is_alpha;

//     my_is_alpha = '#';

//     printf ("MAIN -- Original: ");
//     printf("%d\n", ft_isascii(my_is_alpha));
//     printf ("MAIN -- FTcopy: ");
//     printf("%d\n", ft_isascii(my_is_alpha));
// }