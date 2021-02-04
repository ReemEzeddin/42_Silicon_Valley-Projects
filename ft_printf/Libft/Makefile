# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reezeddi <marvin@42.f>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 19:47:40 by reezeddi          #+#    #+#              #
#    Updated: 2021/02/03 19:47:51 by reezeddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror -g #$(DEBUG_FLAGS)

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEBUG_FLAGS =   -O0 -g                                                      \
                                                                            \
                -fsanitize=address                                          \
                -fsanitize=undefined                                        \
                -fsanitize=bounds                                           \
                -fsanitize=nullability-arg                                  \
                -fsanitize=nullability-return                               \
                -fsanitize=nullability-assign                               \
                -fsanitize=undefined                                        \
                -fsanitize-address-use-after-scope                          \
                # -fsanitize=integer                                        \
                # -fsanitize=object-size                                    \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

NAME        =   libft.a

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

OBJECTS     =   $(SOURCES:.c=.o)

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

HEADERS     =   libft.h                                                       \

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

SOURCES     =    ft_intmaxlen_base.c                                          \
                 ft_atoi.c                                                    \
                 ft_atoi_base.c                                               \
                 ft_intlen.c                                                  \
                 ft_ischarset.c                                               \
                 ft_malloc.c                                                  \
                 ft_memset.c                                                  \
                 ft_strappend.c                                               \
                 ft_strchr.c                                                  \
                 ft_strnew.c                                                  \
                 ft_strcat.c                                                  \
                 ft_strdup.c                                                  \
                 ft_strdup_range.c                                            \
                 ft_strjoin.c                                                 \
                 ft_strjoinfre.c                                              \
                 ft_strlen.c                                                  \
                 ft_strlstrip.c                                               \
                 ft_strndup.c                                                 \
		 ft_strprepend.c                                              \
                 ft_strrstrip.c                                               \
                 ft_uintmaxlen_base.c                                         \
                 ft_utoa_base.c                                               \
                 ft_isdigit.c                                                 \
                 ft_islower.c                                                 \
                 ft_isspace.c                                                 \
                 ft_ft_memalloc.c                                             \
                 ft_isupper.c                                                 \
                 valid_base.c                                                 \

# Main — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

# House Keeping — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEL = /bin/rm -rf

clean:
	@$(DEL) $(shell find . -name '*.o')

fclean: clean
	@$(DEL) $(NAME)

re: fclean all


# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

.PHONY: all clean fclean re nc nh na

# — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —
