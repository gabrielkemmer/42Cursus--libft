/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/15 14:27:47 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
