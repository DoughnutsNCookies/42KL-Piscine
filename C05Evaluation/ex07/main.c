#include <stdio.h>
#include "ft_find_next_prime.c"

int	ft_find_next_prime(int index);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(-1234));
	printf("%d\n", ft_find_next_prime(2147395600));
	printf("%d\n", ft_find_next_prime(-2147483648));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(144));
}
