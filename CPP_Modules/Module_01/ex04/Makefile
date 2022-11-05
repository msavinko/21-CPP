NAME = ft_sed

SRCS = main.cpp

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
