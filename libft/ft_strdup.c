/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 08:49:13 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	i;
	char			*tmp;
	unsigned int	size;

	i = 0;
	size = ft_strlen(str);
	tmp = (char *) malloc(sizeof(const char) * size + 1);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{	
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int	main()
{
	char	palavra[] = "Gabriel";	
	printf("%s", strdup(palavra));
	printf("\n\n");
	printf("%s", ft_strdup(palavra));
}
*/