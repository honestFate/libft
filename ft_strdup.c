#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	
	ptr = malloc(ft_strlen(s1));
    if (!ptr)
        return (NULL);
	while (*s1)
	{
		*ptr = *s1;
		s1++;
	}
	*ptr = '\0';
	return (ptr);
}