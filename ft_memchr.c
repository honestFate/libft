#include "libft.h"

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