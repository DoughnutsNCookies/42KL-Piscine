#include <unistd.h>
#include <stdio.h>
#include "ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div = 0;
	int mod = 0;
	ft_div_mod(-423, 10, &div, &mod);
	printf("%d\t%d", div, mod);
	return (0);
}
