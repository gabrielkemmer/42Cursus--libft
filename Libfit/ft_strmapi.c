/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/13 16:44:23 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
*/
unsigned int		ft_strlen(const char *str) {
	
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char  ft_toupper(unsigned int n, char c)
{
  if (c >= 97 && c <= 127)
  {
      c = c - 32;
  }
  else
  return  (c);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char		*temp;
	unsigned int	size;

	size = ft_strlen(((char*)s) + 1);
	temp = (char *) malloc(sizeof(char) * size);
	if (s == NULL || f == NULL)
	return	(NULL)			
	i = 0;
	while (i < size)
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

/*
int main ()
{
	char palavra[] = "gabriel";
	printf("%s",ft_strmapi(palavra, (ft_toupper)));
  	return(0);
}
*/
