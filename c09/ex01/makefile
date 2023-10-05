# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtamouss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:04:01 by rtamouss          #+#    #+#              #
#    Updated: 2023/10/04 14:26:03 by rtamouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./includes
AR = ar crs #archiver
RM = rm -rf

# Srouce files and object files
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}

#library name
LIB = libft.a

#phony Target (not files)
.PHONY: all clean fclean re

#Default Target : Build the library
all : $(LIB)

#build the library from object files
$(LIB): $(OBJS)
	$(AR) $(LIB) $(OBJS)

# compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB)

# clean everythink and rebuild
re: fclean all
