NAME = iter

SRCS = main.cpp

HEAD = iter.hpp

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS) $(HEAD)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
