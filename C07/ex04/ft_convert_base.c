#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	check_position(char c, char *base);

int	check_base(char *base);

int	ft_atoi_base(char *str, char *base);

int	how_many_digits(int nbr, int base, int *negative)
{
	int	count;

	*negative = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		*negative = 1;
	}
	count = 0;
	while (nbr > 0)
	{
		nbr /= base;
		count++;
	}
	return (count);
}

void	fill_digits(char *result, int value, char *base_to, int i)
{
	int	base;

	base = ft_strlen(base_to);
	if (value == 0)
		result [i] = base_to[0];
	while (value > 0)
	{
		result[i--] = base_to[value % base];
		value /= base;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		value;
	int		digits;
	int		negative;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	value = ft_atoi_base(nbr, base_from);
	digits = how_many_digits(value, ft_strlen(base_to), &negative);
	result = (char *) malloc((digits + negative + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result [digits + negative] = '\0';
	if (negative)
	{
		result[0] = '-';
		value *= -1;
	}
	fill_digits(result, value, base_to, digits + negative - 1);
	return (result);
}

// int main(void)
// {
// 	char	*dec = "0123456789";
// 	char	*hex = "0123456789abcdef";
// 	char	*result;
	
// 	result = ft_convert_base("42", dec, hex);

// 	printf("%s\n", result);

// 	free(result);
// }