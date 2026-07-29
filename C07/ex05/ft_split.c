#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (words);
}

static void	ft_free(char **array, int position)
{
	int	i;

	i = 0;
	while (i < position)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_fill_array(char **array, char const *s, char c)
{
	size_t	len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		if (len)
		{
			array[j] = ft_substr(s, i - len, len);
			if (!array[j])
				ft_free(array, j);
		}
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**dest;

	if (!s)
		return (NULL);
	words = 0;
	words = ft_count_words(s, c);
	dest = (char **) malloc((words + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	dest[words] = NULL;
	ft_fill_array(dest, s, c);
	return (dest);
}