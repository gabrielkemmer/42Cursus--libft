/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 08:20:38 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while	(c[i])
	i++;
	return(i);
}
*/
char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	len;
	char			*temp;
	unsigned int	j;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s1);
	temp = (char *) malloc(sizeof(char) * len);
	while (s1[i])
	{
		if (s1[i] == *set)
			i++;
		else
		{
			temp[j] = s1[i];
			i++;
			j++;
		}
	}	
	return (temp);
}
/*
int	main()
{
	char	palavra[] = "  Gabriel ";
	char	palavra2[] = " ";	
	printf("%s", ft_strtrim(palavra, palavra2));
}
*/
