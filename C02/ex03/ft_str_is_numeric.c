/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:12:39 by mravara           #+#    #+#             */
/*   Updated: 2026/07/27 10:46:36 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
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
	char	*str1 = "23435";
	char	*str2 = "23 435";
	char	*str3 = "234!35";
	char	*str4 = "234a35";
	char	*str5 = "2343F5";
	char	*str6 = NULL;

	printf("%d \n", ft_str_is_numeric(str1));
	printf("%d \n", ft_str_is_numeric(str2));
	printf("%d \n", ft_str_is_numeric(str3));
	printf("%d \n", ft_str_is_numeric(str4));
	printf("%d \n", ft_str_is_numeric(str5));
	printf("%d \n", ft_str_is_numeric(str6));
}