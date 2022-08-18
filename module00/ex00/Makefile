NAME		=	megaphone
SRC			=	megaphone.cpp

OBJ_DIR		=	obj/
OBJ			=	$(addprefix $(OBJ_DIR),$(SRC:%.cpp=%.o))

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
CC			=	c++
RM			=	rm -f

.PHONY:			all clean fclean re

all: 			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $@
				@mkdir $(OBJ_DIR)
				
$(OBJ_DIR)%.o:	%.cpp Makefile
				$(CC) $(CPPFLAGS) -c $< -o $@
				
clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all