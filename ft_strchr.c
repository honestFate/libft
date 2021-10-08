#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	ptr = NULL;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *)s;
			break;
		}
		s++;
	}
	return (ptr);
}