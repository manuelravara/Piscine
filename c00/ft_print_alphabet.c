#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i += 1;
	}
}

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}