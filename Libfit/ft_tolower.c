/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:00 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/07 14:17:47 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <ctype.h>
#include <stdio.h>
*/
char  ft_tolower(char c)
{
  if (c >= 65 && c <= 90)
  {
      c = c + 32;
  }
  else
  return  (c);
}


/*int main ()
{
	char a = '\0';
	printf("%c\n",tolower(a));
	printf("%c\n",ft_tolower(a));
  return(0);
}
*/



