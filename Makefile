NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iinclude -Ilibft
SRCS = src/check_and_parse.c src/main.c src/movements.c src/parsing.c \
src/radix.c src/sort.c src/utils.c 
OBJS = $(SRCS:.c=.o)
LIBFT = libft/libft.a
RM = rm -f

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re
