/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:37:37 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:34:18 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	if (!little[0])
		return ((char *) big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < (int) len)
		{
			if (!little[j + 1])
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char str[20] = "42 born to code";
	char str2[10] = "born";
    int size = 6;

	printf("%s", ft_strnstr(str, str2, size));
	printf("\n\n");
}*/
