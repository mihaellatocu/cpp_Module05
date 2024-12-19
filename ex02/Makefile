NAME = bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJ_F = ./obj
# SRC_F = ./src
src = main.cpp Bureaucrat.cpp AForm.cpp \
	PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
# src =  $(wildcard $(SRC_F)/*.cpp)
obj = $(src:%.cpp=$(OBJ_F)/%.o)

all: $(NAME)

$(NAME): $(obj)
	$(CC) $(CFLAGS) $(obj) -o $(NAME)

$(OBJ_F)/%.o: %.cpp
	mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJ_F)

fclean: clean
	$(RM) $(NAME) home_shrubbery

re: fclean all 

.Phony: clean fclean re all