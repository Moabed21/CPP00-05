NAME	 = Harl
CXX		 = c++
CXXFLAGS = -Wall -Wextra -Werror
SRC		 = main.cpp Harl.cpp
OBJ		 = $(SRC:.cpp=.o)
RM		 = rm -f

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
