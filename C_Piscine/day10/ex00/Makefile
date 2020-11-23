# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reezeddi <marvin@42.f>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/18 06:38:04 by reezeddi          #+#    #+#              #
#    Updated: 2020/09/18 06:38:22 by reezeddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEL         =    /bin/rm -rf

CC          =    gcc
CFLAGS      =    -Wall -Wextra -Werror

NAME        =    libft.a
SRC_DIR     =    srcs
INC_DIR     =    includes

SRCS        =    $(SRC_DIR)/ft_putchar.c \
                 $(SRC_DIR)/ft_putstr.c \
                 $(SRC_DIR)/ft_strcmp.c \
                 $(SRC_DIR)/ft_strlen.c \
                 $(SRC_DIR)/ft_swap.c

OBJS        =    ft_putchar.o \
                 ft_putstr.o \
                 ft_strcmp.o \
                 ft_strlen.o \
                 ft_swap.o

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rvs $(NAME) $^

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c -I $(INC_DIR) $^

clean:
	@$(DEL) *.o

fclean: clean
	@$(DEL) $(NAME)

re: fclean all
