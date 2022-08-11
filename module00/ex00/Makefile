NAME		=	megaphone

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
CC			=	c++
RM			=	rm -f

SRC			=	megaphone.cpp
OBJ			=	$(SRC:%.cpp=%.o)

.PHONY:			all clean fclean re

all: 			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $@
				
%.o:			%.cpp Makefile
				$(CC) $(CPPFLAGS) -c $< -o $@
				
clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all