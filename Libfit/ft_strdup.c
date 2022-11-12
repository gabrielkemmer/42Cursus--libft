/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/11 19:00:40 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int		ft_strlen(const char *str) {
	
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
*/

char	*ft_strdup(const char *str)
{
	unsigned int	i;
	char *tmp;
	
	i = 0;
	if	((tmp = (char *) malloc(sizeof(const char)  * (ft_strlen(str)))) == NULL)
	return	(NULL);
	while (str[i] != '\0')
	{	
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return(tmp);
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

