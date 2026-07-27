#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
}

int	main(void)
{
	char	*str;

	str = "Hello, World!";
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}