#include <unistd.h>
#include <stdio.h>
#include "ft_str_is_printable.c"

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d", ft_str_is_printable("qwerty"));
	printf("%d", ft_str_is_printable("1234"));
	printf("%d", ft_str_is_printable("QWERTY"));
	printf("%d", ft_str_is_printable(" "));
	printf("%d", ft_str_is_printable("!@#$^&*()_+-=[]{}:;,./<>?"));
	printf("%d", ft_str_is_printable(""));
}
