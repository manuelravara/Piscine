#include <unistd.h>

void	ft_print_combn(int n)
{
	int		i;
	int		num[n];

	i = 10;
	while (--n > 0)
		i *= 10;

}	

int	main(void)
{
	int	n;

	n = 3;
	ft_print_combn(n);
	write(1, "\n", 1);
}