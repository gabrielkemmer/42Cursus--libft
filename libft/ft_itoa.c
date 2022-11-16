/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/15 20:37:57 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

static size_t	ft_intlen(int n)
{
	size_t	len;

	if (n < 0)
	{
		len = 1;
	}
	else
		len = 0;
	while (1)
	{
		++len;
		if (!(n / 10))
			break ;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		i;
	int		cnt;
	char	*buf;

	buf = (char *)ft_calloc(cnt + 1, sizeof(char));
	if (n < 0)
		neg = 1;
	else
		neg = 0;
	if (neg > 0)
		i = 0;
	else
		i = -1;
	cnt = (int)ft_intlen(n);
	if (buf == NULL)
		return (NULL);
	if (neg)
		buf[0] = '-';
	while (++i < cnt)
	{
		buf[cnt - (!neg) - i] = "0123456789"[ft_abs(n % 10)];
		n /= 10;
	}
	buf[cnt] = '\0';
	return (buf);
}
/*
int	main()
{
	int	numero = -24561000;	
	int	numero2 =INT_MAX;
	int	numero3 = INT_MIN;
	printf("First: %s\n",ft_itoa(numero));
	printf("Second: %s\n",ft_itoa(numero2));
	printf("Third: %s",ft_itoa(numero3));
	return	(0);
}
*/
