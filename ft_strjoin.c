#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*start;
	char	*cat_s;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	cat_s = malloc(total_len * sizeof(char));
	if (!cat_s)
		return (NULL);
	start = cat_s;
	while (*s1)
		*(cat_s++) = *(s1++);
	while (*s2)
		*(cat_s++) = *(s1++);
	*cat_s = '\0';
	return (start);
}