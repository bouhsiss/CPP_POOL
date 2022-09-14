NAME   = ./ex00
CC	= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
SRCS = ./main.cpp ./Dog.cpp ./Cat.cpp ./Animal.cpp ./WrongAnimal.cpp ./WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME) :
		$(CC) $(CFLAGS) -c $(SRCS) 
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re : fclean all