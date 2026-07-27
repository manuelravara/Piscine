#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int num;

	if (nb == 0)
		return (1);
	if (!nb)
		return (0);
	num = nb;
	while (--nb)
	{
		num = num * nb;
	}
	return (num);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(7));
}