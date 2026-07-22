#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c;

	a = -1;
	while (++a < 99)
	{
		b = a;
		while (++b < 100)
		{
			c = 48 + a / 10;
			write(1, &c, 1);
			c = 48 + a % 10;
			write(1, &c, 1);
			write(1, " ", 1);
			c = 48 + b / 10;
			write(1, &c, 1);
			c = 48 + b % 10;
			write(1, &c, 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
}