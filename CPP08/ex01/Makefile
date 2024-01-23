CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRC = main.cpp Span.cpp

OBJ = $(SRC:.cpp=.o)

NAME = span

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