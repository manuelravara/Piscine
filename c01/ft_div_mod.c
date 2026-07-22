#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	z;
	int	*div;
	int	*mod;

	a = 42;
	b = 10;
	x = 0;
	z = 0;
	div = &x;
	mod = &z;
	ft_div_mod(a, b, div, mod);
	printf(" div: %d \n mod: %d \n", *div, *mod);
	return (0);
}