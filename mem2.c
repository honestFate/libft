#include <stddef.h>
size_t  ft_strlen(const char *s);

size_t  ft_strlen(const char *s)
{
    int len;

    len = 0;
    while (s[len])
        ++len;
    return (len);
}

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = NULL;
	while (--n)
	{
		if (*((char *) s) == c)
		{
			ptr = (char *)s;
			break;
		}
		s++;
	}
	return (ptr);
}

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}