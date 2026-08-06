NAME	 = this_is_brain
C++		 = c++
CPPFLAGS = -Wall -Wextra -Werror
SRC		 = main.cpp
OBJ = $(SRC:.cpp=.o)
RM  = rm -f

all: $(NAME)

%.o: %.c
	$(C++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(C++) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
