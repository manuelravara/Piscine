#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 47;
	while (++a < 58)
	{
		b = a;
		while (++b < 58)
		{
			c = b;
			while (++c < 58)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 55 || b != 56 || c != 57)
					write(1, ", ", 2);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
}