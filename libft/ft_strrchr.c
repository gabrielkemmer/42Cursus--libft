/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:35:24 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:49:40 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str) + 1;
	while (i--)
	{
		if (*(str + i) == c)
			return ((char *)(str + i));
	}
	return (0);
}
/*ele pega a primeira ocorrencia da letra que eu pesquisa, 
o strrchr pega a ultima ocorrencia da pesquisa. 
Gibriel em strchr imprime ibriel. No strrchr imprime 
//iel.*/
/*
int main()
{
    char nome[20] = "Gibriel";
    char letra = 'i';
    printf("%s\n", strrchr(nome, letra));
    printf("%s\n", strchr(nome, letra));
    printf("%s\n", ft_strrchr(nome, letra));
}
*/
