#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i > 96)
	{
		write(1, &i, 1);
		i -= 1;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}