#include <unistd.h>
#include <stdio.h>
#include "ft_putstr_non_printable.c"

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
