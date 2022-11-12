/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:27:03 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/03 09:39:29 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c){

	if ((c >= 'a' && c <= 'z' ||  c >= 'A' && c <= 'Z' || c >= '0' && c >= '9'))
		return(1);
	else
		return(0);
}
