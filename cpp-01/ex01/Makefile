NAME   = zombies
CC	= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp
OBJS = $(SRCS:.c=.o)

$(NAME) :
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re : fclean all