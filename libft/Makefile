# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reezeddi <marvin@42.f>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 05:37:04 by reezeddi          #+#    #+#              #
#    Updated: 2020/11/20 20:10:44 by reezeddi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Name  — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

NAME			=		libft.a


# Source Files  — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —
HEADERS			=		libft.h

SOURCES			=		ft_strchr.c ft_strnstr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c ft_strlen.c \
							ft_memcmp.c ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c ft_memmove.c \
							ft_memset.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memcpy.c \
							ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_tolower.c ft_split.c \
							ft_toupper.c ft_strcpy.c ft_strdup.c ft_strncpy.c ft_strlcat.c ft_strtrim.c\
							ft_strlcpy.c ft_atoi.c ft_itoa.c ft_strjoin.c ft_strmapi.c ft_substr.c \
							ft_putendl.c ft_putendl_fd.c ft_putchar.c ft_putchar_fd.c ft_putnbr.c \
							ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_countwords.c ft_strslen.c \
							ft_isintab.c ft_atoi_base.c ft_memalloc.c

# Object Files  — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

OBJECTS			=		$(SOURCES:.c=.o)

# Bonus Files  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  —  -   -  -  -

BONUS			=		ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
							ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
							ft_lstnew.c ft_lstsize.c ft_lstmap.c

# Bonus_Objects —   —   —   —   —   —   —   —   —   —   —   —   —   —   —   —   —    —   -

BONUS_OBJECTS	=		$(BONUS:.c=.o)

# Compilation Flags  — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

CC				=		clang
CSTANDARD		=		-std=c99
CFLAGS			=		-Wall -Wextra -Werror


# Optimization Flags  — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

O_FLAGS			=		-O2 -march=native


# Debug Flags  — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

D_FLAGS			=		-O0 -g $(S_FLAGS)


# Sanitizer Flags  — — —— — — — — — — — — — — — — — — — — — — — — — — — — — — —

S_FLAGS			+=		-fsanitize=address
S_FLAGS			+=		-fsanitize=undefined

# Rules/Targets  — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

all: CFLAGS		+=		$(O_FLAGS)
all:			$(NAME)

debug: CFLAGS	+=		$(D_FLAGS)
debug:			clean
				$(NAME)
				@make clean

run:			$(NAME)
				@./$(NAME)

bonus: 			$(BONUS_OBJECTS)
				ar rcs $(NAME) $(BONUS_OBJECTS)
				ranlib $(NAME)

$(NAME):		$(OBJECTS)
				ar rcs $(NAME) $(OBJECTS)
				ranlib $(NAME)

%.o: %.c		$(HEADERS)
				@$(CC) $(CFLAGS) -pipe -c $< -o $@
				@echo $(WHITE) "Compiling => " $<




# House Keeping — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

DEL				=		/bin/rm -rf	-f	*.o

clean:
	@$(DEL) $(shell find . -name '*.o')

fclean:			clean
						@$(DEL) $(NAME)

re:						fclean all

so:
	clang -g -fPIC -Wall -Werror -Wextra -pedantic $(SOURCE) $(BONUS)-shared -o libft.so

# Text Colorization — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

GREEN			=		"\033[1;32m"
WHITE			=		"\033[1;37m"


# Phony — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — — —

.PHONY:			all clean fclean re run debug
