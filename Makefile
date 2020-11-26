# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kawish <kawish@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/26 12:38:35 by kawish        #+#    #+#                  #
#    Updated: 2020/11/26 12:40:13 by kawish        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ_FILES = $(SRC_FILES:.c=.o)
SRC_FILES = $(wildcard ft_*.c)
HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

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