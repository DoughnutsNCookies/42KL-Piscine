#include <unistd.h>
#include <stdio.h>
#include "ft_print_memory.c"

void	*ft_print_memory(void *addr, unsigned int size);

int     main(void)
{
	int i;

	char str[] = "Bonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	i = 150;
	ft_print_memory(str, i);
}
