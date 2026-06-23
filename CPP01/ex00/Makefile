NAME	 = BraiiiiiiinnnzzzZ
C++		 = c++
CPPFLAGS = -Wall -Wextra -Werror
SRC		 = main.cpp newZombie.cpp \
		   randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)
RM  = rm -f

all: $(NAME)

%.o: %.c
	$(C++) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ) Zombie.hpp
	$(C++) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
