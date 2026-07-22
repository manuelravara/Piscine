#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i += 1;
	}
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}