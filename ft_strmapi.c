#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmap;
	unsigned	i;

	i = 0;
	strmap = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!strmap)
		return (NULL);
	while (*s)
	{
		*(strmap + i) = f(i, *s);
		i++;
		s++;
	}
	return (strmap);
}