NAME = FragTrap
C++ = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  ClapTrap.cpp main.cpp FragTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)
RM  = rm -f

all: $(NAME)

%.o: %.cpp 
	$(C++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ) FragTrap.hpp
	$(C++) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all