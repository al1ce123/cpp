CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

NAME = claptrap

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(SRC) $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)