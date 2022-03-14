NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

SRC = megaphone.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all