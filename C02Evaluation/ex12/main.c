#include <unistd.h>
#include <stdio.h>
#include "ft_print_memory.c"

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	ft_print_memory("asdfasdfqwertytyzxcvzxcv\0\0\xff\x7f\x01", 100);
}
