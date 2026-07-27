#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[64] = "0 1 2 3 4";
	char	*src = " 5 6 7 8 9";
	char	*result;
	
	printf("%s\n", dest);
	printf("%s\n", src);
	result = ft_strncat(dest, src, 10);
	printf("%s\n", result);
}