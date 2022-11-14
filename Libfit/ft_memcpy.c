/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:27:03 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 08:17:59 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
*/
//eu uso o cast (char *) porque e void.
void	*ft_memcpy(void *dest, const void *src, unsigned int len)
{
	int	i;

	i = 0;
	if (len == 0)
		return (dest);
	while (i <= len - 1)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char dest[20] = "Gabriel";
	char src[20] = "Gab";
	int	size = 3;

	printf(memcpy(dest, src, size));
	printf("\n\n");
	printf(ft_memcpy(dest, src, size));
}
*/
