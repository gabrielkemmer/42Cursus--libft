/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 08:34:29 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*temp;
	unsigned int	size;

	size = ft_strlen((char *)s);
	temp = malloc(sizeof(char) * (len + 1));
	if (!s || !temp)
		return (NULL);
	i = 0;
	while (start < size && s[start + i] && i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
int	main()
{
	char	palavra[] = "Gabriel";	
	unsigned int number = 1;
	unsigned int len = 3;
	printf("%s", ft_substr(palavra, number, len ));
	
}
*/