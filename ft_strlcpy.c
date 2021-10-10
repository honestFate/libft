#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	char			*ptr;

	ptr = dst;
	i = 0;
	if (dstsize > 0)
	{
		while (ptr[i] && i < dstsize - 1 && src[i])
		{
			ptr[i] = src[i];
			++i;
		}
		ptr[i] = '\0';
	}
	if ((size_t) i < dstsize)
		return ((size_t) i);
	return (dstsize);
}
