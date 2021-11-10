# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 19:22:30 by malbuque          #+#    #+#              #
#    Updated: 2021/11/10 21:56:38 by malbuque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a

SRCS =		ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c

OBJS = 		$(SRCS:.c=.o)

CC = 		gcc
CFLAGS =	-Wall -Wextra -Werror -I.
RM = 		rm -f

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
