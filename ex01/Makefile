NAME = libft.a
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen ft_strcmp.c

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
