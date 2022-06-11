#include <unistd.h>
#include <stdio.h>
#include "ft_strcmp.c"
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("qwerty", "qwerty"));
	printf("%d\n", strcmp("qwerty", "qwer"));
	printf("%d\n", ft_strcmp("qwerty", "qwer"));
	printf("%d\n", ft_strcmp("qwer", "qwerty"));
}
