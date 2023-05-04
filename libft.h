/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:25:32 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/04 18:32:31 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>

int	ft_isalpha(int str);
int	ft_isdigit(int c);
int ft_isalnum(int c );
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *memset(void *s, int c, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n);


#endif
