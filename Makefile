NAME=libftprintf.a

CC=gcc

CFLAGS=-c -Wall -Wextra -Werror

RM=rm -f

SRC=ft_convert_base.c \
	ft_printf.c \
	ft_utils.c \
	ft_utils_two.c \
	ft_putnbr_unsigned.c \
	ft_handle_unsigned_int.c \
	ft_handle_str.c \
	ft_handle_ptr.c \
	ft_handle_int.c \
	ft_handle_o.c \

OBJ=$(SRC:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

LIBFT= ./libft/libft.a

$(NAME): $(OBJ)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all

