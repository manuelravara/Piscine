/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:27:10 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 10:27:11 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (dest && src)
	{
		while (i < n && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		if (i != n)
			dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char src[] = "This is the string to copy.";
// 	char dest1[30];
// 	char dest2[30];

// 	printf("%s \n", src);
// 	ft_strncpy(dest1, src, 16);
// 	printf("%s \n", dest1);
// 	strncpy(dest2, src, 16);
// 	printf("%s \n", dest2);
// 	return (0);
// }