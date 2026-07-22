#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[size];
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size)
		temp[j--] = tab[i++];
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}

int	main(void)
{
	int	tab[6];
	int	i;

	i = 0;
	while (i < 6)
	{
		tab[i] = i;
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	printf("----- after reversing ----- \n");
	ft_rev_int_tab(tab, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}