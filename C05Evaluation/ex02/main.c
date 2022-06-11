#include <stdio.h>
#include "ft_iterative_power.c"

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(4, 2));
	printf("%d\n", ft_iterative_power(2, 8));
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(0, 1));
	printf("%d\n", ft_iterative_power(12, -3));
	printf("%d\n", ft_iterative_power(-2, 5));
	printf("%d\n", ft_iterative_power(1000, 1));
}
