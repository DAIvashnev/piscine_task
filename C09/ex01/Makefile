SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS_DIR = srcs
OBJ = $(notdir $(SRCS:.c=.o))
OBJ_DIR = obj
INC_DIR = includes
INC = ft.h
CC = gcc
FLAGS = -c -Wall -Wextra -Werror
СFLAGS = $(FLAGS)

vpath %.c $(SRCS_DIR)
vpath %.o $(OBJ_DIR)

all: libft.a
%.o: %.c	
	@mkdir -p $(OBJ_DIR)
	$(CC) $(СFLAGS) -o $(addprefix $(OBJ_DIR)/, $@) -c $<

libft.a: $(OBJ)
	ar rc libft.a $(addprefix $(OBJ_DIR)/, $(OBJ))
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf libft.a

re: fclean all