#include <unistd.h>
#include <stdio.h>
#include "ft_swap.c"

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 42;
	int b = -24;
	ft_swap(&a, &b);
	printf("%d\t%d", a, b);
	return (0);
}
