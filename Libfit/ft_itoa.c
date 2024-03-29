/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 08:14:04 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	ft_absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
*/
char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_strlen(n);
	result = (char *) malloc(sizeof(char) * len);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = ft_absolute(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
/*
int	main()
{
	int	numero = 100;	
	int	numero2 =INT_MAX;
	int	numero3 = INT_MIN;
	printf("%s",ft_itoa(numero));
	printf("\n");
	printf("%s",ft_itoa(numero2));
	printf("\n");
	printf("%s",ft_itoa(numero3));
	return	(0);
}
*/
