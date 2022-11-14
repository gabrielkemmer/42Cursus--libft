/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:24 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:16:50 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (i <= n)
		{
			if (str1[i] == str2[i] && i == n)
				return (str1[i] - str2[i]);
			else if (str1[i] == str2[i])
			{
				i++;
			}
			else
			{
				return (str1[i] - str2[i]);
			}
		}
	}
}
/*
int main()
{
    char nome[] = "Gabri";
    char nome2[] = "GaBri";
    int tamanho = 5;
    printf("%d\n", strncmp(nome, nome2, tamanho));
    printf("%d\n", ft_strncmp(nome, nome2, tamanho));
}
*/
