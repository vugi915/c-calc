#include "../headers/calc.h"

bool    ft_isoperator(char c);

bool    ft_isoperator(char c)
{
    const char  *operators = "+-/*";

    return (strchr(operators, c) != (char *)0);
}