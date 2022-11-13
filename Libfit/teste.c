
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned int		ft_strlen(const char *str)
{	
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}



char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		idx;
	char		*tmp;

	if (!s || !f ||
			!(tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	idx = 0;
	while (idx < (ft_strlen((char *)s)))
	{
		tmp[idx] = f(idx, s[idx]);
		idx++;
	}
	tmp[idx] = '\0';
	return (tmp);
}

int main()
{
    char    palavra[] = "Gabriel";
    unsigned int    numero = 100;
    char    letra = 'G';

    printf("%s",ft_strmapi(palavra, (char*)f(numero, letra)));
    return  (0);
}
