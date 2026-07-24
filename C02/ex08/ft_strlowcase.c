/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:41:00 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 11:41:01 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*str1 = "This Is A String!";
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