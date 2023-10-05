
CC = gcc
SRCS = do-op.c ft_add.c ft_sub.c ft_mul.c ft_mod.c ft_atoi.c ft_div.c ft_putnbr.c
OBJS = ${SRCS:.c=.o}
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
NAME = do-op
all:
	@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all
