#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	j = len_dest;
	if (!dest && size == 0)
		return (len_src);
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] && i < size - len_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_src + len_dest);
}

int main(void)
{
	char			src[] = "aaaaaaaa";
	char			dest[12] = "abcdef";
	unsigned int	size = 23;

	printf("length src: %d\n", ft_strlen(src));
	printf("length dest: %d\n", ft_strlen(dest));
	printf("%d\n", ft_strlcat(dest, src, size));
	// printf("%d\n", strlcat(dest, src, size));
	printf("%s\n", dest);
	printf("length after concatenation: %d\n\n", ft_strlen(dest));
}