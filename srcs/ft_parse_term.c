#include "../headers/calc.h"

double ft_parse_term(char **str);

double ft_parse_term(char **str)
{
    double res;
    
    res = ft_parse_factor(str);
    while(true)
    {
        if (**str == '*')
        {
            (*str)++;
            res *= ft_parse_factor(str);
        } 
        else if (**str == '/')
        {
            (*str)++;
            double r = ft_parse_factor(str);
            if (r == 0)
            {
                printf("Error: Division by zero\n");
                exit(0); 
            }
            res /= r;
        } 
        else
            break;
    }
    return (res);
}