/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:32:41 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s)
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
}

void	f(unsigned int i, char *c) //toupper
{
	if (c[i] >= 97 && c[i] <= 122)
	{
		c[i] = c[i] - 32;
	}
	else
		c[i]++;
}

int main()
{
	char str1[] = "LoReM iPsUm";
	char* str2;
	ft_striteri(str1, *f);
	printf("%s\n", str1);
}

