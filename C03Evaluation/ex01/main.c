#include <unistd.h>
#include <stdio.h>
#include "ft_strncmp.c"

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_strncmp("qwerty", "abcde", 5));
	printf("%d\n", ft_strncmp("qwerty", "abc", 5));
	printf("%d\n", ft_strncmp("abc", "abcd", 25000000));
}
