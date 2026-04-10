#include "../headers/calc.h"

bool    ft_check_input(int argc, char **argv);

bool    ft_check_input(int argc, char **argv)
{
    int balance_of_brackets = 0;

    if (argc != 2)
    {
        printf("%s: incorrect number of parameters.\n", argv[0]);
        return (false);
    } 
    else if (!ft_ishelp(argv[1]))
    {

        for (size_t i = 0; i < strlen(argv[1]); i++)
        {
            if (argv[1][i] == '(')
            {
                if (!isdigit(argv[1][i + 1]) && argv[1][i + 1] != '(')
                {
                    printf("%s: incorrect input\n", argv[0]);
                    return (false);
                }
                balance_of_brackets++;
            }
            else if (argv[1][i] == ')')
                balance_of_brackets--;
            else if (!isdigit(argv[1][i]) && !ft_isoperator(argv[1][i]))
            {
                printf("%s: incorrect symbol: %c\n", argv[0], argv[1][i]);
                return (false);
            }
        }
        if (balance_of_brackets != 0)
        {
            printf("%s: incorrect number of parentheses\n", argv[0]);
            return (false);
        }
    }
    return (true);
}
