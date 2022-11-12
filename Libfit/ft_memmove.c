/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:27:03 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/03 09:43:57 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void *ft_memmove(void* dest, const void* src, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0 || src == dest)
	return	(dest);
	if (src < dest)
	{
		while (i < n){
			((char *)dest)[i] = ((char*)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)dest)[i] = ((char*)src)[i];
			n--;
		}
	}
	return(dest);
}

/*
int main()
{
	char dest[50] = "abc";
	char src[50] = "ghjjjhhh";
	int	size = 50;

	printf(memmove(dest, src, size));
	printf("\n\n");
	printf(ft_memmove(dest, src, size));
}
*/