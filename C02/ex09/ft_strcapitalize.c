/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:45:53 by mravara           #+#    #+#             */
/*   Updated: 2026/07/27 10:54:31 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '-' || str[i - 1] == '+')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '-' || str[i - 1] == '+'))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*str1 = "thisisastring";
	// char	*str2 = "This is not an alphabetical string!";
	// char	*str3 = "abcdefghijklmnopqrstuvwxyz";
	// char	*str4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	// char	*str5 = NULL;

	printf("%s \n", ft_strupcase(str1));
	// printf("%s \n", ft_strupcase(str2));
	// printf("%s \n", ft_strupcase(str3));
	// printf("%s \n", ft_strupcase(str4));
	// printf("%s \n", ft_strupcase(str5));
}