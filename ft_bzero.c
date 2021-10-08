#include "libft.h"

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