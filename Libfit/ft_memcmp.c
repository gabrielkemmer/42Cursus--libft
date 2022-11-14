/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:27:03 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:56:55 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//eu uso o cast (char *) porque e void.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i <= n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *) s2)[i])
		i++;
		else
			return (((unsigned char *)s1)[i] -= ((unsigned char *) s2)[i]);
	}
	return (0);
}
/*
int main()
{
	char s1[20] = "Gabriel";
	char s2[20] = "GaB";
	int	size = 0;

	printf("%d", memcmp(s1, s2, size));
	printf("\n\n");
	printf("%d", ft_memcmp(s1, s2, size));
}*/
