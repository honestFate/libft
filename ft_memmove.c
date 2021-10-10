#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int		direction;
	char	*d;
	char	*s;

	if (!dst || !src)
		return (NULL);
	d = dst;
	s = (char *)src;
	direction = 1;
	if (dst > src)
	{
		direction = -1;
		d += len - 1;
		s += len - 1;
	}
	while (len--)
	{
		*d = *s;
		d += 1 * direction;
		s += 1 * direction;
	}
	return (dst);
}
