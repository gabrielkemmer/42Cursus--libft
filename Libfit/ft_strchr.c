/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:24 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/07 16:35:28 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/

char	*ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&((char *)str)[i]);
		i++;
	}
    if (str[i] == c)
		return (&((char *)str)[i]);
	return (0);
}

/*
//ele pega a primeira ocorrencia da letra que eu pesquisa, o strrchr pega a ultima ocorrencia da pesquisa. Gibriel em strchr imprime ibriel. No strrchr imprime 
//iel.
int main()
{
    char nome[20] = "Gabriel";
    char letra = 'a';
    printf("%s\n", strchr(nome, letra));
    printf("%s\n", ft_strchr(nome, letra));
}
*/