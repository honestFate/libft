#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	char	*ptr;

	ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	res = ptr;
	while (*s1)
	{
		*ptr = *s1;
		++ptr;
		++s1;
	}
	*ptr = '\0';
	return (res);
}
