/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:16:31 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 11:16:32 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "thisisastring";
	char	*str2 = "This is not an alphabetical string!";
	char	*str3 = "abcdefghijklmnopqrstuvwxyz";
	char	*str4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*str5 = NULL;

	printf("%d \n", ft_str_is_lowercase(str1));
	printf("%d \n", ft_str_is_lowercase(str2));
	printf("%d \n", ft_str_is_lowercase(str3));
	printf("%d \n", ft_str_is_lowercase(str4));
	printf("%d \n", ft_str_is_lowercase(str5));
}