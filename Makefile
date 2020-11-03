NAME = libft.a # what are libft.a's dependencies
OBJ_FILES = $(SRC_FILES:.c=.o) # pakt alle src_files bestanden maar dan degene die eindigen in .o
SRC_FILES = $(wildcard ft_*.c)
HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

# $(NAME): $(OBJ_FILES)
# 	$(CC) -o $@ $^
$(NAME): $(OBJ_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re