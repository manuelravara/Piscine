#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int	tab[10];
	int	i;

	srand(time(NULL));
	i = 0;
	while (i < 10)
	{
		tab[i] = rand() % (9 - 0 + 1) + 0;
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	printf("----- after reversing ----- \n");
	ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}