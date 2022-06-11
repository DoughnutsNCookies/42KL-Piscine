#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int	main(int ac, char **av)
{
	ac = 0;
	printf("%d", ABS(atoi(av[1])));
	return (0);
}
