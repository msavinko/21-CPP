NAME = arr

SRCS = main.cpp

HEAD = Array.hpp

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(SRCS) $(HEAD)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
