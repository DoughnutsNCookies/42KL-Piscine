#include <unistd.h>
#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_uppercase("ABCDE"));
	printf("%d", ft_str_is_uppercase(" ABC "));
	printf("%d", ft_str_is_uppercase("A B C"));
	printf("%d", ft_str_is_uppercase("AbC"));
	printf("%d", ft_str_is_uppercase("ABCdE"));
	printf("%d", ft_str_is_uppercase(""));
}
