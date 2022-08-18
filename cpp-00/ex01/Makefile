NAME   = phonebook
CC	= clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = ./Phonebook.cpp ./contact.cpp ./main.cpp
OBJS = $(SRCS:.c=.o)

$(NAME) :
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re : fclean all