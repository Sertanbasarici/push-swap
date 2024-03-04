NAME = push_swap.a
SRCS = push_swap_control.c push_swap_util.c push_swap.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -fr


all : $(NAME)

$(NAME): $(OBJS)
		$(MAKE) -C ./libft
		$(MAKE) -C ./ft_printf
		$(CC) $(CFLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C ./libft
	$(MAKE) -C ./ft_printf


fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./libft
	$(MAKE) -C ./ft_printf

re: fclean all

.PHONY: all clean fclean re