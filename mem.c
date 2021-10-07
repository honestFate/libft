#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
    char	*temp;

	if (b && len)
	{
    	temp = b;
    	while (len)
        	temp[--len] = (char)c;
	}
    return (b);
}

void	ft_bzero(void *s, size_t n)
{
    char    *temp;

	if (s && n)
	{
    	temp = s;
    	while (n)
        	temp[--n] = '\0';
	}
}

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *temp;

	if (dst && src && n)
	{
    	temp = dst;
    	while (n)
		{
			n--;
        	temp[n] = ((const char*)src)[n];
		}
	}
    return (dst);
}

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int		direction;
	char	*d;
	char	*s;

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