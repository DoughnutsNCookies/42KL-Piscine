#include <unistd.h>
#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_lowercase("abcde"));
	printf("%d", ft_str_is_lowercase(" abc "));
	printf("%d", ft_str_is_lowercase("a b c"));
	printf("%d", ft_str_is_lowercase("aBc"));
	printf("%d", ft_str_is_lowercase("12a34"));
	printf("%d", ft_str_is_lowercase(""));
}
