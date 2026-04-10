#include "../headers/calc.h"

double  ft_parse_number(char **str);

double  ft_parse_number(char **str)
{
    char *end;
    double res = strtod(*str, &end);
    if (*str == end)
    {
        printf("Unexpected token at: %s\n", *str);
        exit(0);
    }
    *str = end;
    return (res);
}