#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	char	*ptr;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len < dstsize)
	{
		ptr = dst;
		while (dst_len < dstsize - 1 && ptr[dst_len] && src[i])
			ptr[dst_len++] = src[i++];
		ptr[dst_len] = '\0';
	}
	if ((size_t) i < src_len)
		return (dstsize + src_len);
	return (dst_len + src_len);
}