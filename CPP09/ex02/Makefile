CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

SRC = main.cpp PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

NAME = PmergeMe

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(SRC) $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)