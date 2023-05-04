/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:37:32 by kryrodri          #+#    #+#             */
/*   Updated: 2023/03/01 20:47:26 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if(argc == 1)
        write(1, "Burru!, falta arguments", 23);
    else
    {
        int i;

        i = 0;
        while (argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
}