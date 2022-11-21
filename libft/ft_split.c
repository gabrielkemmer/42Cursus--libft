/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:09:06 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/11/21 07:37:04 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*//*
size_t	get_cnt(char const *s, char c)
{
	size_t		cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

char	**free_machine(char **s, size_t i)
{
	while (s[i] != NULL && i >= 0)
	{
		free(s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

static	ft_substr2(const char *s)
{
	ft_substr(s, 0, len)
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		len;
	size_t		word_count;
	char		**temp;

	temp = (char **)malloc(sizeof(char *) * (get_cnt(s, c) + 1));
	if (!s || !temp)
		return (NULL);
	word_count = get_cnt(s, c);
	substr = ft_substr2(s);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			if (i < word_count && !(temp[i++] = substr))
				return (free_machine(temp, i));
			s += len;
		}
	}
	temp[i] = 0;
	return (temp);
}
/*
int	main()
{
	char	palavra[] = "   lorem   ipsum dolor    
 sit amet, consectetur   adipiscing elit.
 Sed non risus. Suspendisse   ";
	char	palavra2 = ' ';	
	char	**str;

	str = ft_split(palavra, palavra2);
	printf("%s", str); 
	return	(0);
}
*/