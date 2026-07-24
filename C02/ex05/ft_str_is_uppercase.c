/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:19:02 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 11:19:15 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	*str1 = "THISISASTRING";
	char	*str2 = "This is not an alphabetical string!";
	char	*str3 = "abcdefghijklmnopqrstuvwxyz";
	char	*str4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*str5 = NULL;

	printf("%d \n", ft_str_is_uppercase(str1));
	printf("%d \n", ft_str_is_uppercase(str2));
	printf("%d \n", ft_str_is_uppercase(str3));
	printf("%d \n", ft_str_is_uppercase(str4));
	printf("%d \n", ft_str_is_uppercase(str5));
}