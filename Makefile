CC = CC
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putstr.c ft_putaddr.c ft_putnbr.c ft_putnbr_u.c
OFILES = ${CFILES:.c=.o}
NAME = libftprintf.a

all: ${NAME}

$(NAME): $(OFILES)
	ar -rc ${NAME} ${OFILES}

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean : 
	rm ${OFILES}

fclean :
	rm -rf ${NAME} ${OFILES}

re: fclean all
