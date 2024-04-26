# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorin <smorin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 15:40:01 by smorin            #+#    #+#              #
#    Updated: 2024/04/26 16:10:16 by smorin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    	=	src/main.c \
				src/check_arg.c \
				src/check_node.c \
				src/cost.c \
				src/ft_error.c \
				src/ft_free.c \
				src/init_a_to_b.c \
				src/init_b_to_a.c \
				src/position.c \
				src/push.c \
				src/reverse_rotate.c \
				src/rotate.c \
				src/sort.c \
				src/swap.c \
				src/utils_lst.c \
				src/utils.c \


OBJS    	=	$(SRCS:.c=.o)

DEPS 		=	$(SRCS:.c=.d)

CC  		=	cc

RM  		=	rm -f

CFLAGS  	=	-Wall -Wextra -Werror -I. -MMD -g3

NAME    	=	push_swap

all: $(NAME)

-include $(DEPS)

LIBFT = ./libft/libft.a

$(LIBFT):
	make -C libft

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L./libft -lft

all: ${NAME}

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
