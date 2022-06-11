#include <unistd.h>
#include <stdio.h>
#include "ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 423;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\t%d", a, b);
	return (0);
}
