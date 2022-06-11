#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	printf("%d\t%d\t%d", ft_strlen("test"), ft_strlen("hello"), ft_strlen("world"));
	return (0);
}
