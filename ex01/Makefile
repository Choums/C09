NAME	= libft.a

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= ${addprefix srcs/, ${SRCS:.c=.c}}

CC		= 	gcc
RM		= 	rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			ar -rcs $@ $^

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean ${NAME}
