NAME   = Violence
CC	= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = ./main.cpp ./HumanA.cpp ./HumanB.cpp ./Weapon.cpp
OBJS = $(SRCS:.c=.o)

$(NAME) :
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re : fclean all