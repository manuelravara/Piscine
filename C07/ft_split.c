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

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	j;
	int	strings;
	int	inside_token;

	i = 0;
	strings = 0;
	inside_token = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				inside_token = 0;
			else
			{
				if (inside_token == 0)
				{
					strings++;
					inside_token = 1;
				}
			}
			j++;
		}
		i++;
	}
	return (strings);
}

int	main(void)
{
	int	a = ft_count_strings(",,hello;;;world,,42,", ",;");

	printf("%d\n", a);
}

// void	ft_fill_array(char **dest, char *str, char *charset, int strings)
// {
// 	int	i;

// 	i = 0;
// 	while (i < strings)
// 	{
// 		dest[i] = (char *) malloc()
// 	}
// }

// char	**ft_split(char *str, char *charset)
// {
// 	int		i;
// 	int		strings;
// 	char	**dest;

// 	if (!str)
// 		return (NULL);
// 	strings = 0;
// 	strings = ft_count_strings(str, charset);
// 	dest = (char **) malloc((strings + 1) * sizeof(char *));
// 	if (!dest)
// 		return (NULL);
// 	ft_fill_array(dest, str, charset, strings);
// 	dest[strings] = NULL;
// 	return (dest);
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