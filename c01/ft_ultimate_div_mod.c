#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	i;
	int	j;

	i = 4;
	j = 2;
	a = &i;
	b = &j;
	printf("a: %d, b = %d \n", *a, *b);
	printf("----- after ultimate_div_mod ----- \n");
	ft_ultimate_div_mod(a, b);
	printf("a: %d, b = %d \n", *a, *b);
	return (0);
}