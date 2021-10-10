#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	while (*s1 == *s2 && --n)
	{
		s1++;
		s2++;
	}
	res = (unsigned char)*s1 - (unsigned char)*s2;
	return (res);
}
