/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:21:06 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 11:21:08 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
	char	str6[4];

	printf("%d \n", ft_str_is_printable(str1));
	printf("%d \n", ft_str_is_printable(str2));
	printf("%d \n", ft_str_is_printable(str3));
	printf("%d \n", ft_str_is_printable(str4));
	printf("%d \n", ft_str_is_printable(str5));
	str6[0] = 35;
	str6[1] = 34;
	str6[2] = 32;
	str6[3] = 30;
	printf("%d \n", ft_str_is_printable(str6));
}