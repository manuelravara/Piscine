/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:10:41 by mravara           #+#    #+#             */
/*   Updated: 2026/07/27 10:43:06 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "This is the string to copy.";
	char dest1[30];
	char dest2[30];

	printf("%s \n", src);
	ft_strcpy(dest1, src);
	printf("%s \n", dest1);
	strcpy(dest2, src);
	printf("%s \n", dest2);
	return (0);
}