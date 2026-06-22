NAME     = phonebook
CPP      = c++
HEADERS  = header.hpp Contact.hpp
CPPFLAGS = -Wall -Wextra -Werror
SRC      = main.cpp operations.cpp utils.cpp
OBJ      = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re