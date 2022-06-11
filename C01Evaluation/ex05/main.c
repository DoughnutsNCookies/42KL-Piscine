#include <unistd.h>
#include <stdio.h>
#include "ft_putstr.c"

void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("testing ft_putstr complete\n");
	ft_putstr("\n");
	ft_putstr("test2");
	return (0);
}
