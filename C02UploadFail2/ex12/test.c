#include <unistd.h>

void    ft_putchar(char character, int duplicate)
{
    int    index;

    index = 0;
    while (index < duplicate)
    {
        write(1, &character, 1);
        index++;
    }
}

void    print_hex(unsigned long long string_addr, int zero)
{
    char    *hexadecimal;

    hexadecimal = "0123456789abcdef";
    if (string_addr < 16 && zero == 1)
        ft_putchar('0', 1);
    if (string_addr >= 16)
    {
        print_hex(string_addr / 16, 0);
        print_hex(string_addr % 16, 0);
    }
    else
    {
        ft_putchar(hexadecimal[string_addr], 1);
    }
}

void    print_addr(unsigned long long string_addr)
{
    unsigned long long    temp_addr;
    int                    index;

    temp_addr = string_addr;
    index = 1;
    while (index++ < 15)
    {
        if (temp_addr < 16)
            ft_putchar('0', 1);
        temp_addr /= 16;
    }
    print_hex(string_addr, 0);
}

void    print_data(unsigned char *string_addr, int send)
{
    int    index;

    index = -1;
    while (index++ <= 16)
    {
        if (index % 2 == 0)
            ft_putchar(' ', 1);
        if (index < send)
        {
            print_hex((unsigned long long)*(string_addr + index), 1);
        }
        else if (index != 16)
        {
            ft_putchar(' ', 2);
        }
    }
    index = -1;
    while (index++ < send - 1)
    {
        if (*(string_addr + index) <= 31 || *(string_addr + index) >= 127)
            ft_putchar('.', 1);
        else
            ft_putchar(*(string_addr + index), 1);
    }
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int        index;
    unsigned int        send;
    unsigned char        *string_addr;

    index = 0;
    string_addr = addr;
    while (index * 16 < size)
    {
        if (index < size / 16)
            send = 16;
        else
            send = size % 16;
        print_addr((unsigned long long)string_addr + (index * 16));
        ft_putchar(':', 1);
        print_data(string_addr + index * 16, send);
        ft_putchar('\n', 1);
        index++;
    }
    return (addr);
}

int     main(void)
{
    int i;

    char str[] = "Bonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    i = 150;
    ft_print_memory(str, i);
}
