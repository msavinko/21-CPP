NAME = span

SRCS = main.cpp Span.cpp

OBJS = $(patsubst %.cpp,%.o,$(SRCS))

HEAD = Span.hpp

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp $(HEAD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
