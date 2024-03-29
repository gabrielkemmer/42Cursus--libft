/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:24 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:47:30 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char nome[] = "Gabriel";
    char letra = 'a';
    int tamanho = 5;
    printf("%s\n", memchr(nome, letra, tamanho));
    printf("%s\n", ft_memchr(nome, letra, tamanho));
}
*/
