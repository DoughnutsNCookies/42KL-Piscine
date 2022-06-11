#include <unistd.h>
#include <stdio.h>
#include "ft_ft.c"

void	ft_ft(int *nbr);

int	main(void)
{
	int a = 0;
	int b = 1;
	int c = -1;
	ft_ft(&a);
	ft_ft(&b);
	ft_ft(&c);
	printf("%d\t%d\t%d", a, b, c);
	return (0);
}
