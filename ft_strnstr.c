#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*ptr;

	if (!haystack || !needle)
		return (NULL);
	i = 0;
	ptr = NULL;
	while (*haystack && len--)
	{
		if (*haystack == needle[i])
		{
			if (i == 0)
				ptr = (char *)haystack;
			if (!needle[++i])
				return (ptr);
		}
		else
			i = 0;
		++haystack;
	}
	if (i < (int)ft_strlen(needle))
		return (NULL);
	return (ptr);
}