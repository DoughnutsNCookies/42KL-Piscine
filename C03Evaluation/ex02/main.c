#include <stdio.h>
#include <unistd.h>
#include "ft_strcat.c"

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char test[256] = "";
	printf("%s\n", ft_strcat(test, "asdf"));
	printf("%s\n", ft_strcat(test, ""));
	printf("%s\n", ft_strcat(test, "zxcv"));
}
