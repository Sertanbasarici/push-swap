NAME = push_swap
SRCS =control_check_a.c control_check_b.c push_swap_control.c push_swap_error.c push_swap_util_2.c push_swap_util_3.c push_swap_util.c push_swap.c sort.c to_do_check_a.c to_do_check_b.c free.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -rf

all: ${NAME} 
${NAME}: ${OBJS}
	@${MAKE} -C ./libft
	@${MAKE} -C ./ft_printf
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a ./ft_printf/ft_printf.a -o ${NAME}

clean: 
	@${MAKE} -C ./libft fclean
	@${MAKE} -C ./ft_printf fclean
	@${RM} *.o

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re