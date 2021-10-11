#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	char			*ptr;

	if (!dstsize)
		return (ft_strlen(src));
	ptr = dst;
	while (src[i] && i < dstsize - 1)
	{
		ptr[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
