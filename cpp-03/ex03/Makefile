NAME   = ./ex03
CC	= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow
SRCS = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp ./DiamondTrap.cpp
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