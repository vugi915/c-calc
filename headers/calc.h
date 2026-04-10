#ifndef CALC_H
# define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


bool    ft_ishelp(char *str);
bool    ft_check_input(int argc, char **argv);
void    ft_print_help(char *program_name);
bool    ft_isoperator(char c);
double  ft_parse_expr(char **str);
double  ft_parse_term(char **str);
double  ft_parse_number(char **str);
double  ft_parse_factor(char **str);

#endif