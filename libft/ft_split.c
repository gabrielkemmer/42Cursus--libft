/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:54:33 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	char			*temp;
	unsigned int	j;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s);
	temp = (char *) malloc(sizeof(char) * len);
	while (s[i] != c)
	{	
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	while (s[i])
	{
		temp[j] = s[i];
		j++;
		i++;
	}
	temp[j + 1] = '\0';
	return ((char **) temp);
}
/*
int	main()
{
	char	palavra[] = "Gabriel";
	char	palavra2 = 'b';	
	printf("%s",ft_split(palavra, palavra2));
	return	(0);
}
*/
