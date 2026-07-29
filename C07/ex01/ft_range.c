#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = (int *) malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// int	main(void)
// {
// 	int	*dest;
// 	int	min;
// 	int	max;
// 	int	i;

// 	min = -3;
// 	max = 3;
// 	dest = ft_range(min, max);
// 	i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	free(dest);
// }