#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	c;
	int	*ptr;

	c = 2;
	printf("C: %d\n", c);
	ptr = &c;
	*ptr = 10;
	printf("C: %d\n", c);
	c = 10;
	ft_ft(ptr);
	printf("C: %d\n", c);
	return (0);
}