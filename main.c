#include <stdio.h> //DEL
#include <ctype.h> //DEL
#include <string.h> //DEL
#include <stdlib.h> //DEL
#include <stddef.h>
size_t  ft_strlen(const char *s);

size_t  ft_strlen(const char *s)
{
    int len;

    len = 0;
    while (s[len])
        ++len;
    return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	j;

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
			while (s[i] != c && s[i])
			{
				++i;
				++word_len;
			}
			arr[word_count] = malloc((word_len + 1) * sizeof(char));
			if (!arr[word_count++])
				return (0);
		}
	}
	arr[word_count] = malloc(sizeof(char));
	arr[word_count] = NULL;
	return (1);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**splited;
	words = 0;
	i = 0;
	while (s[i])
		if (s[i++] != c)
		{
			while (s[i] != c && s[i])
				++i;
			++words;
		}
	splited = (char **)malloc((words + 1) * sizeof(char *));
	if (!splited || !ft_arr_loc(s, c, splited))
		return (NULL);
	ft_fill_arr(s, c, splited);
	return (splited);
}

int main(int argc, char** argv)
{
    (void) argc;
    (void) argv;
	
    char **str = ft_split("    some text   written   by Me", ' ');
	while (*str)
	{
		printf("%s\n", *str);
		str++;
	}
}