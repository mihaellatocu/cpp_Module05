NAME = bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJ_F = ./obj
SRC_F = ./src
# src = $(SRC_F)/main.cpp $(SRC_F)/Bureaucrat.cpp
 src =  $(wildcard $(SRC_F)/*.cpp)
obj = $(src:$(SRC_F)/%.cpp=$(OBJ_F)/%.o)

all: $(NAME)

$(NAME): $(obj)
	$(CC) $(CFLAGS) $(obj) -o $(NAME)

$(OBJ_F)/%.o: $(SRC_F)/%.cpp
	mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@ 


clean:
	$(RM) $(OBJ_F)

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.Phony: clean fclean re all