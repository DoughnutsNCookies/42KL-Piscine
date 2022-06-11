#include <unistd.h>
#include <stdio.h>
#include "ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d", ft_str_is_alpha("abcdef"));
	printf("%d", ft_str_is_alpha(" abd "));
	printf("%d", ft_str_is_alpha("a b c"));
	printf("%d", ft_str_is_alpha("0"));
	printf("%d", ft_str_is_alpha("abc1def"));
	printf("%d", ft_str_is_alpha(""));
}
