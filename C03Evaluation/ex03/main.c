#include <stdio.h>
#include <unistd.h>
#include "ft_strncat.c"

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{

	char test[256] = "01234567890";
	char test1[256] = "01234567890";
	char test2[256] = "01234567890";
	char test3[256] = "01234567890";
	printf("%s\n", ft_strncat(test, "asdf", 16));
	printf("%s\n", ft_strncat(test1, "", 16));
	printf("%s\n", ft_strncat(test2, "qwerty", 0));
	printf("%s\n", ft_strncat(test3, "asdf", 3));
}
