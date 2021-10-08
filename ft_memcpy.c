#include "libft.h"

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