#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &base[str[i] / 16], 1);
			write(1, &base[str[i] % 16], 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*str = "Hello\nHow are you?";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);

	return (0);
}