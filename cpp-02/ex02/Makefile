NAME   = ex02
CC	= clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ./main.cpp ./Fixed.cpp
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