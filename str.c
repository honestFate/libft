#include <stddef.h>
size_t  ft_strlen(const char *s);

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



char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	ptr = NULL;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *)s;
			break;
		}
		s++;
	}
	return (ptr);
}

char *ft_strrchr(const char *s, int c)
{
	char	*ptr;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	ptr = NULL;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	return (ptr);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && --n && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}