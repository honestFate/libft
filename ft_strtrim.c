#include "libft.h"

static int	ft_in(char c, char const *set)
{
	int	flag;

	flag = 0;
	while (*set)
	{
		if (c == *(set++))
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;
	char	*res;

	start = 0;
	while (s1[start])
		if (!ft_in(s1[start++], set))
			break;
	end = ft_strlen(s1) - 1;
	while (s1[end])
		if (!ft_in(s1[end--], set))
			break;
	--start;
	trimmed = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	res = trimmed;
	++end;
	while (start <= end)
		*(trimmed++) = s1[start++];
	*trimmed = '\0';
	return (res);
}