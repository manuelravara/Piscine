#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find)
		return (str);
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "This is the string.";
	char	*s1 = "the";
	char	*s2 = "g.";

	printf("%p\n", ft_strstr(str, s1));
	printf("%p\n", strstr(str, s1));
	printf("\n");

	printf("%p\n", ft_strstr(str, s2));
	printf("%p\n", strstr(str, s2));
	printf("\n");

	char *m = "aaab";
	char *n = "aab";
	printf("%p\n", ft_strstr(m, n));
	printf("%p\n", strstr(m, n));
}