NAME = myBank

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/

SRC_FILES = tests.cpp Account.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all : $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@$(CC) $(FLAGS) -I $(INC_DIR) -o $@ -c $<

$(NAME) : $(OBJ)
	@echo ".o files updated!..."
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) executable compiled!"

clean :
	rm -rf $(OBJ_DIR)*.o

fclean : clean
	rm -rf $(NAME)

re : fclean all