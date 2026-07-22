#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 4;
	d = 2;
	a = &c;
	b = &d;
	printf(" value a: %d \n value b: %d \n", *a, *b);
	ft_swap(a, b);
	printf("----- after swap ----- \n");
	printf(" value a: %d \n value b: %d \n", *a, *b);
	return(0);
}