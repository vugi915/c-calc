#include "../headers/calc.h"

int     main(int argc, char **argv)
{
    if (ft_check_input(argc, argv))
    {
        if (ft_ishelp(argv[1]))
            ft_print_help(argv[0]);
        else
        {
            double res = ft_parse_expr(&argv[1]);
            printf("%s = %f", argv[1], res);
        }
    }
    else
        printf("You can get more information using the command \"%s help\"\n", argv[0]);
    return (0);
}
