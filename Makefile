NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -Iinclude -Ilibft
SRCS = src/main.c src/parsing.c src/movements.c src/sort.c src/radix.c \
src/check_and_parse.c src/utils.c src/index.c src/free.c src/parsing_validation.c 
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
