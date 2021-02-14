NAME=libftprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC=ft_count_n.c \
	ft_printf.c \
	ft_putbase.c \
	ft_putnbr_unsigned.c \
	ft_utils.c \
	ft_utils2.c \

OBJ=$(SRC:.c=.o)


$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

bonus: $(OBJ) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJS_BONUS)

clean:
	$(RM) $(OBJ) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus so

