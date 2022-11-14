/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:00 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/14 09:51:59 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <ctype.h>
#include <stdio.h>
*/
char	ft_toupper(char c)
{
	if (c >= 97 && c <= 127)
	{
		c = c - 32;
	}
	else
		return (c);
}
/*
int main ()
{
	char a = 'F';
	printf("%c\n",toupper(a));
	printf("%c\n",ft_toupper(a));
  return(0);
}
*/
