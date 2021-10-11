#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*ptr;
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if ((int)dstsize - (int)dst_len < 1)
		return (dstsize + src_len);
	total_len = dst_len + src_len;
	ptr = dst;
	while (dst_len < dstsize - 1 && *src)
	{
		ptr[dst_len] = *(src++);
		++dst_len;
	}
	ptr[dst_len] = '\0';
	return (total_len);
}
