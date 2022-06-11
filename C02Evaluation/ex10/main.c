#include <unistd.h>
#include <stdio.h>
#include "ft_strlcpy.c"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char test[256] = "1234567890";
	printf("%d-", ft_strlcpy(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "uiop", 0));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "qwerty", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "", 4));
	printf("%s\n", test);
}
