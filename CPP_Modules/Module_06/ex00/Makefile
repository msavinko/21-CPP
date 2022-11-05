NAME = convert

SRCS = main.cpp Convert.cpp

OBJS = $(patsubst %.cpp,%.o,$(SRCS))

DEP = $(patsubst %.o,%.d,$(OBJS))

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)
	$(RM) $(DEP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)
