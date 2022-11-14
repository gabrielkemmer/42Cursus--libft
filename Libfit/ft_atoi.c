/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:50:41 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:10:27 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>
*/

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	while (*nptr == '\n' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
		signal = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		i = i * 10 + (*nptr - '0');
		nptr++;
	}
	return (i * signal);
}

/*
int main()
{
	char word[10] = "+123,455";
	
    printf("%d", atoi(word));
	printf("\n\n");
	printf("%d", ft_atoi(word));
    printf("\n\n");
}
*/
