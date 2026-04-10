NAME	=	c-calc

SOURCES	=	./srcs/main.c \
			./srcs/ft_check_input.c \
			./srcs/ft_ishelp.c \
			./srcs/ft_isoperator.c \
			./srcs/ft_parse_expr.c \
			./srcs/ft_parse_factor.c \
			./srcs/ft_parse_number.c \
			./srcs/ft_parse_term.c \
			./srcs/ft_print_help.c

OBJECTS	=	./main.o \
			./ft_check_input.o \
			./ft_ishelp.o \
			./ft_isoperator.o \
			./ft_parse_expr.o \
			./ft_parse_factor.o \
			./ft_parse_number.o \
			./ft_parse_term.o \
			./ft_print_help.o

FLAGS	=	-Werror -Wall -Wextra

HEADER	=	./headers

$(NAME)		:	all

all			:
				gcc -c $(FLAGS) $(SOURCES) -I $(HEADER) 
				gcc -o $(NAME) $(FLAGS) $(OBJECTS)

clean		: 
				rm -rf $(OBJECTS)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean \
				all

boom		:	re \
				clean
				clear