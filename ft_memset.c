#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
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
