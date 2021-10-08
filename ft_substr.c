#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	while (s[start + i] && i <= len)
		i++;
	sub_s = (char *)malloc(i * sizeof(char));
	if (!sub_s)
		return (NULL);
	j = 0;
	while (start <= i)
		sub_s[j++] = s[start++];
	return (sub_s);
}