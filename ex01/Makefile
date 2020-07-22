NAME = libft.a
SRCS = srcs/t_putchar.c srcs/ft_swap.c srcrs/ft_putstr.c srcs/ft_strlen srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.c}

CC = 	gcc
RM = 	rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): 	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all
