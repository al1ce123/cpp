CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

OBJ = $(SRC:.cpp=.o)

NAME = zombie

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(SRC) $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)
