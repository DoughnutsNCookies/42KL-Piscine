#include <stdio.h>
#include "ft_is_prime.c"

int	ft_is_prime(int index);

int	main(void)
{
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(2147395600));
	printf("%d\n", ft_is_prime(46691));
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(144));
}
