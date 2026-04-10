#include "../headers/calc.h"

double ft_parse_factor(char **str);

double ft_parse_factor(char **str)
{
    if (**str =='(')
    {
        (*str)++;
        double res = ft_parse_expr(str);
        if (**str == ')') 
            (*str)++;
        return (res);
    }
    else if (**str == '+' || **str == '-')
    {
        char op = (**str);
        (*str)++;
        double v = ft_parse_factor(str);
        return (op == '-') ? -v : v;
    }
    else
        return ft_parse_number(str);
}