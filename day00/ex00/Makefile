NAME		=	megaphone
SRC			=	megaphone.cpp

OBJ			=	$(SRC:%.cpp=%.o)

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
CC			=	c++
RM			=	rm -f

.PHONY:			all clean fclean re test

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

test:			$(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone