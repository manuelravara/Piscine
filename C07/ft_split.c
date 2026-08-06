/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:31:22 by mravara           #+#    #+#             */
/*   Updated: 2026/08/04 15:31:23 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	strings;
	int	inside_token;

	i = 0;
	strings = 0;
	inside_token = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset))
			inside_token = 0;
		else
		{
			if (inside_token == 0)
			{
				strings++;
				inside_token = 1;
			}
		}
		i++;
	}
	return (strings);
}

int	ft_token_len(char *str, int start, char *charset)
{
	int	len;

	len = 0;
	while (str[start + len] && !ft_is_sep(str[start + len], charset))
		len++;
	return (len);
}

void	ft_fill_array(char **dest, char *str, char *charset)
{
	int	i;
	int	k;
	int	len;
	int	j;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset))
			i++;
		else
		{
			len = ft_token_len(str, i, charset);
			dest[k] = malloc(len + 1);
			j = 0;
			while (j < len)
			{
				dest[k][j] = str[i + j];
				j++;
			}
			dest[k][j] = '\0';
			k++;
			i += len;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		strings;
	char	**dest;

	if (!str)
		return (NULL);
	strings = ft_count_strings(str, charset);
	dest = malloc((strings + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	ft_fill_array(dest, str, charset);
	dest[strings] = NULL;
	return (dest);
}

// int	main(void)
// {
// 	int	a = ft_count_strings(",,hello;;;world,,42,", ",;");

// 	printf("%d\n", a);
// }

// int main(void)
// {
// 	int		i;
// 	char	*str = "This string, a mix words and commas, will separate the string, according with a specified separator.";
// 	char	*sep = ", ";
// 	char	**dest;

// 	dest = ft_split(str, sep);
// 	i = 0;
// 	while (dest[i])
// 		printf
// }