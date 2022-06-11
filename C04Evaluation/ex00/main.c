#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int main()
{
	printf("%d,%d,%d", ft_strlen("asdf"), ft_strlen("qwerty"), ft_strlen("zxc0zxc"));
	return 0;
}
