CC = gcc
CFLAFS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isalnum.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c	ft_isprint.c  ft_memset.c  ft_strlen.c
OBJ = $(SRC:.c=.o)

all : $(NAME)
$(NAME) : $(NAME) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $*.c -o $*.o

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
