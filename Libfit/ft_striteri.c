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
/*#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/
void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*temp;
	unsigned int	size;	

	size = ft_strlen(((char *)s) + 1);
	temp = (char *) malloc(sizeof(char) * size);
	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		f(i, s + i);
		i++;
	}
	temp[i] = '\0';
}
/*
int main ()
{
	char palavra[] = "gabriel";
	printf("%s",ft_striteri(palavra, (void*)(ft_toupper)));
  	return(0);
}
*/
