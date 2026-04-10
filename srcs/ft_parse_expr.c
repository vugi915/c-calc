#include "../headers/calc.h"

double  ft_parse_expr(char **str);

double  ft_parse_expr(char **str)
{
    double res;
    
    res = ft_parse_term(str);
    while(true)
    {
        if (**str == '+')
        {
            (*str)++;
            res += ft_parse_term(str);
        }
        else if (**str == '-')
        {
            (*str)++;
            res -= ft_parse_term(str);
        } 
        else 
            break;
    }
    return (res);
}
