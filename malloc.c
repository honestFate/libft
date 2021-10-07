#include <stddef.h>
size_t  ft_strlen(const char *s);

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(count * size);
    if (!ptr)
        return (NULL);
	while (i < count * size)
		ptr[i++] = '\0';
	return (ptr);
}

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