/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/12 10:36:01 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
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
char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	char	*temp;
	unsigned int	j;
	
	i = 0;
	j = 0;
	len = ft_strlen((char*)s);
	temp = (char*) malloc(sizeof(char) * len);
	while	(s[i] != c)
	{	
		if (s[i] == '\0')
		{
			return(NULL);
		}
		i++;
	}
	while	(s[i])	
	{
		temp[j] = s[i];
		j++;
		i++; 
	}
	temp[j + 1] = '\0';	
	return	((char**) temp);
}
/*
int	main()
{
	char	palavra[] = "Gabriel";
	char	palavra2 = 'G';	
	printf("%s",ft_split(palavra, palavra2));
	return	(0);
}
*/


