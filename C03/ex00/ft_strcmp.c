/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:42:55 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 12:42:57 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "abcdefgh!";
	char	s2[] = "abcdefgh.";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));

	printf("%d\n", ft_strcmp("abcdefgh", ""));
	printf("%d\n", strcmp("abcdefgh", ""));

	printf("%d\n", ft_strcmp("This is a string", "This Is a string"));
	printf("%d\n", strcmp("This is a string", "This Is a string"));
}