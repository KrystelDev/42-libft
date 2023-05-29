/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:38:34 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/24 22:20:04 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main() {
//     int fileDescriptor;
// 	char	c = 'c';
//     // Abrir el archivo en modo de escritura (si no existe, se creará)
//     fileDescriptor = open("archivo.txt", O_WRONLY | O_CREAT, 0644);
//     // Escribir en el archivo
//     ft_putchar_fd(c, fileDescriptor);
//     // Cerrar el archivo
//     close(fileDescriptor);
//     return 0;
// }
