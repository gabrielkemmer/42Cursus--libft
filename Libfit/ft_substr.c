/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/11 19:12:07 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char *tmp;
	
	i = 0;
	if	((tmp = (char *) malloc(sizeof(char)  * len)) == NULL)
	return	(NULL);
	while (s[start] != '\0' && i != len)
	{	
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return(tmp);
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

