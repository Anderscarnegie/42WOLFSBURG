# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 12:52:22 by ioleinik          #+#    #+#              #
#    Updated: 2021/05/31 20:51:19 by ioleinik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g

AR		= ar rcs
RM		= rm -f

NAME	= libftprintf.a
INCL	= libftprintf.h
LIBFT	= make -C libft

SRC		= ft_printf.c dispatch.c handle_d.c ft_putnbr_base.c handle_c.c \
			handle_s.c handle_p.c handle_u.c handle_x.c handle_bigx.c \
			handle_perc.c init_table.c reset_table.c parse.c read_flags.c \
			handle_spec.c handle_spec_u.c handle_spec_x.c handle_spec_bigx.c \
			handle_spec_c.c handle_spec_p.c

OBJ		= ${SRC:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)
			$(RM) $(OBJ)

main:
			$(CC) $(CFLAGS) -c main.c
			$(CC) $(CFLAGS) *.o -I. libftprintf.a
			rm -f *.o

clean:		
			$(RM) *.o a.out

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re