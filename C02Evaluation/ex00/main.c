#include <unistd.h>
#include <stdio.h>
#include "ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char test1[100] = "hello";
	printf("%s", ft_strcpy(test1, "hello"));
	printf("%s", ft_strcpy(test1, ""));
	printf("%s", ft_strcpy(test1, "world"));
	printf("%s", ft_strcpy(test1, "\n"));
	printf("%s", ft_strcpy(test1, "0123456789"));
}
