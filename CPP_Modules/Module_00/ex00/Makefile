NAME = megaphone

SRCS = megaphone.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

fclean: 
	${RM} $(NAME)

re: fclean all