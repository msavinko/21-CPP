NAME		=	replace
SRC			=	main.cpp replace.cpp
HEADER		=	replace.hpp
OBJ			=	$(SRC:%.cpp=%.o)

CPPFLAGS	=	-Wall -Wextra -Werror -I. -std=c++98
CC			=	c++
RM			=	rm -f

.PHONY:			all clean fclean re

all: 			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $@
				
%.o:			%.cpp $(HEADER) Makefile
				$(CC) $(CPPFLAGS) -c $< -o $@
				
clean:
				$(RM) $(OBJ)
				$(RM) *.replace

fclean:			clean
				$(RM) $(NAME)

re:				fclean all