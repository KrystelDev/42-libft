/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:32:12 by kryrodri          #+#    #+#             */
/*   Updated: 2023/02/28 20:46:03 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char dest[2];
// 	char *src;

//     dest[0] = '\0';
//     src = "hola";

//     printf ("MAIN -- Antes de cambiar el valor dest vale: ");
//     printf("%s", dest);
//     printf ("\n");
//     printf ("MAIN -- Antes de cambiar el valor src vale: ");
//     printf("%s", src);
//     printf ("\n");    
//     printf("Puntero de dest: %p", dest);
// 	printf ("\n");

//     ft_strcpy(dest, src);

//     printf("Puntero de dest: %p", dest);
// 	printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor dest vale: ");
//     printf("%s", dest);
//     printf ("\n");
//     printf ("MAIN -- Despues de cambiar el valor src vale: ");
//     printf("%s", src);
//     printf ("\n");
// }

// OPCION B) CON ARRAYS
// #include <stdio.h>
// char *ft_strcpy(char *dest, char *src)
// {
//     int i = 0;
//     while(src[i] != '\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return (dest);
// }

// int main(void)
// {
//     char dest[] = "abc";
//     char src[] = "0123456789";
//     printf("%s", ft_strcpy(dest, src));
//     printf ("\n");*/
//     return (0);
// }