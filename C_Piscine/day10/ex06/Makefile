# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reezeddi <marvin@42.f>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/18 06:51:39 by reezeddi          #+#    #+#              #
#    Updated: 2020/09/18 06:51:57 by reezeddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEL         =   /bin/rm -rf

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror

NAME        =   do-op

SRCS        =   main.c \
                ft_opp.c \
                utils.c \
                output.c

OBJS        =   $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(DEL) *.o

fclean: clean
	$(DEL) $(NAME)

re: fclean all
