SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS_DIR = srcs
OBG = $(notdir $(SRC:.c=.o))
OBG_DIR = obj
INC_DIR = includes
INC = ft.h
CC = gcc
FLAGS = -с -Wall -Wextra -Werror
СFLAGS = $(FLAGS)

vpath %.c $(SRC_DIR)
vpath %.o $(OBG_DIR)

all: libft.a
%.o: %.c
	@mkdir -p $(OPG_DIR)
	$(CC) $(СFLAGS) -o $(addprefix $(OBG_DIR)/, $@) -c $<
libft.a: $(OBG)
	ar rc libft.a $(addprefix $(OBG_DIR)/, $(OBG))
clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a

re: fclean all