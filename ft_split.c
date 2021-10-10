#include "libft.h"

static int	ft_free_on_err(char **arr, int words)
{
	int	i;

	i = 0;
	while (i < words - 1)
	{
		free(arr + i);
		i++;
	}
	return (0);
}

static void	ft_fill_arr(char const *s, char c, char **arr)
{
	int	i;
	int	word_len;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		word_len = 0;
		if (s[i++] != c)
		{
			--i;
			word_len = 0;
			while (s[i] != c && s[i])
			{
				arr[word_count][word_len++] = s[i++];
			}
			arr[word_count][word_len] = '\0';
			++word_count;
		}
	}
}

static int	ft_arr_loc(char const *s, char c, char **arr)
{
	int	i;
	int	word_len;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		word_len = 0;
		if (s[i++] != c)
		{
			--i;
			word_len = 0;
			while (s[i] != c && s[i++])
				++word_len;
			arr[word_count] = malloc((word_len + 1) * sizeof(char));
			if (!arr[word_count++])
				return (ft_free_on_err(arr, word_count));
		}
	}
	arr[word_count] = malloc(sizeof(char));
	arr[word_count] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**splited;

	if (!s)
		return (NULL);
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i++] != c)
		{
			while (s[i] != c && s[i])
				++i;
			++words;
		}
	}
	splited = (char **)malloc((words + 1) * sizeof(char *));
	if (!splited || !ft_arr_loc(s, c, splited))
		return (NULL);
	ft_fill_arr(s, c, splited);
	return (splited);
}
