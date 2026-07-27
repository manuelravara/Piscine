#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
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
	result = ft_strcat(dest, src);
	printf("%s\n", result);
}