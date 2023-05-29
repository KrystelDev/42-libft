/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:04:04 by kryrodri          #+#    #+#             */
/*   Updated: 2023/05/19 12:12:45 by kryrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_isdigit.c"
// #include <stdio.h>
// #include <string.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signed_nptr;
	int	zero;
	int	result;

	i = 0;
	signed_nptr = 1;
	result = 0;
	zero = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if ((*nptr == '-' && !ft_isdigit(nptr[1]))
		|| *nptr == '\e' || ft_isalpha((int)*nptr))
		return (result);
	if (nptr[i] == '-')
		signed_nptr = -1;
	while (ft_isdigit(nptr[++i]))
		;
	i--;
	while (i >= 0 && ft_isdigit(nptr[i]))
	{
		result = (result + (((int)nptr[i--]) - 48) * zero);
		zero = (zero * 10);
	}
	return (result * signed_nptr);
}

// #include<stdlib.h>
// int main(){
// 	char* s="-1.23";
// 	int n=atoi(s);
//     int n2=ft_atoi(s);
// 	printf("ORI:%d\n",n);
//     printf("Rep:%d\n",n2);
// 	return 0;
// }