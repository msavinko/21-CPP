NAME		=	Account
SRC			=	Account.cpp test.cpp
HEADER		=	Account.hpp
OBJ			=	$(SRC:%.cpp=%.o)

CPPFLAGS	=	-Wall -Wextra -I. -std=c++98 # -Werror
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

fclean:			clean
				$(RM) $(NAME)

re:				fclean all