# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kijsong <kijsong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 09:15:47 by kijsong           #+#    #+#              #
#    Updated: 2022/09/11 01:19:16 by kijsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar rcs
RM		=	rm -f

SRC_DIR	=	./src/

CTYPE	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_isdigit.c \
			ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_tolower.c \
			ft_toupper.c
LIST	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
STDIO	=	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
STDLIB	=	ft_atoi.c ft_itoa.c ft_calloc.c ft_free.c ft_bsearch.c
STRING	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strspn.c \
			ft_strcspn.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
			ft_strcmp.c ft_strncmp.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c

SRC		=	$(addprefix ctype/, $(CTYPE)) $(addprefix malloc/, $(MALLOC)) \
			$(addprefix stdio/, $(STDIO)) $(addprefix stdlib/, $(STDLIB)) \
			$(addprefix string/, $(STRING))
SRC_B	=	$(addprefix list/, $(LIST))

SRCS	=	$(addprefix $(SRC_DIR), $(SRC))
SRCS_B	=	$(addprefix $(SRC_DIR), $(SRC_B))

OBJS	=	$(SRCS:.c=.o)
OBJS_B	=	$(SRCS_B:.c=.o)

ifdef FLAG_B
	OBJS += $(OBJS_B)
endif

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus:
	@make FLAG_B=1

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re:
	make fclean
	make all

.PHONY: all bonus clean fclean re
