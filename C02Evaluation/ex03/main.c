#include <unistd.h>
#include <stdio.h>
#include "ft_str_is_numeric.c"

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d", ft_str_is_numeric("12345"));
	printf("%d", ft_str_is_numeric(" 123 "));
	printf("%d", ft_str_is_numeric("1 2 3"));
	printf("%d", ft_str_is_numeric("0"));
	printf("%d", ft_str_is_numeric("12a34"));
	printf("%d", ft_str_is_numeric(""));
}
