#include <stdio.h>
#include "ft_strs_to_tab.c"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("Index\t: %d\n", index);
		printf("original: $%s$ pointer: %p\n", structs[index].str, structs[index].str);
		printf("copied\t: $%s$ pointer: %p\n", structs[index].copy, structs[index].copy);
		printf("size\t: %d\n\n", structs[index].size);
		index++;
	}
}
