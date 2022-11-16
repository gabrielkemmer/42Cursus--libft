/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:27:03 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/16 09:21:36 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i <= n - 1)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
	char dest[20] = "Gabriel";
	char src[20] = "Kemmer";
	int	size = 10;

	printf("%p", memcpy(dest, src, size));
	printf("\n\n");
	printf("%p",ft_memcpy(dest, src, size));
}
*/
