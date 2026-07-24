/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:00:03 by mravara           #+#    #+#             */
/*   Updated: 2026/07/24 12:00:05 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

int	main(void)
{
	char src[] = "This is the string to copy.";
	char dest1[30];
	char dest2[30];

	printf("length src: %ld\n", strlen(src));
	printf("result: %u - %s\n", ft_strlcpy(dest1, src, 30), dest1);
	printf("result: %d - %s\n", strlcpy(dest2, src, 30), dest2);
	return(0);
}