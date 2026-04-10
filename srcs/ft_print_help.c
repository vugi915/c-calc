#include "../headers/calc.h"

void    ft_print_help(char *program_name);

void    ft_print_help(char *program_name)
{
    printf("Using: %s [\"mathematical expression\"]\n", program_name);
    printf("Example: %s (2+3)-4\n", program_name);
}