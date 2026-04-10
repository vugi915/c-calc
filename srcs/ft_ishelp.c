#include "../headers/calc.h"

bool    ft_ishelp(char *str);

bool    ft_ishelp(char *str)
{
    return strcmp(str, "help") == 0;
}