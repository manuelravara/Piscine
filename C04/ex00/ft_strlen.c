#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		return (i);
	}
	return (i);
}

int	main(void)
{
	char	*str;
	int		i;

	str = "Hello, World!";
	i = ft_strlen(str);
	printf("Length of string: %d \n", i);
	return (0);
}