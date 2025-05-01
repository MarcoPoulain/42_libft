CC = gcc
CFLAFS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strlen.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c
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
