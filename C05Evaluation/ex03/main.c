#include <stdio.h>
#include "ft_recursive_power.c"

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(4, 2));
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(0, 1));
	printf("%d\n", ft_recursive_power(12, -3));
	printf("%d\n", ft_recursive_power(-2, 5));
	printf("%d\n", ft_recursive_power(1000, 1000));
}
