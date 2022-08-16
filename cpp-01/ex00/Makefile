NAME   = Zombies
CC	= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = ./Zombie.cpp ./main.cpp ./newZombie.cpp ./randomChump.cpp
OBJS = $(SRCS:.c=.o)

$(NAME) :
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re : fclean all