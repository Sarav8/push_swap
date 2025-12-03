# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: savaquer <savaquer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 15:05:46 by savaquer          #+#    #+#              #
#    Updated: 2025/10/14 17:08:36 by savaquer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#lista de todos los .c
SRCS = ft_isalnum.c \
ft_isprint.c \
ft_memcmp.c \
ft_strlcat.c \
ft_strncmp.c \
ft_atoi.c \
ft_isalpha.c \
ft_memcpy.c \
ft_strchr.c \
ft_strlcpy.c \
ft_strnstr.c \
ft_tolower.c \
ft_bzero.c \
ft_isascii.c \
ft_memmove.c \
ft_strdup.c \
ft_strlen.c \
ft_strrchr.c \
ft_toupper.c \
ft_calloc.c \
ft_isdigit.c \
ft_memchr.c \
ft_memset.c \
ft_strjoin.c \
ft_substr.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_putendl_fd.c\
ft_itoa.c \
ft_strtrim.c \
ft_strmapi.c \
ft_striteri.c \
ft_split.c


BONUS = ft_lstnew_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c \
ft_lstdelone_bonus.c \
ft_lstiter_bonus.c \
ft_lstlast_bonus.c \
ft_lstsize_bonus.c \
ft_lstmap_bonus.c 



# ar arhive, rcs read create save
#define el compilador, define las ociones de compilacion
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a

#crea lista de .o automaticamente 
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

# objetivo por defecto- crea la libreria 
all:			$(NAME)

#crea la libreria .a a partir de los .o
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#limpia los .o
clean:
	$(RM) $(OBJS)

#limpia todo (objetos y librerias)
fclean:	clean
	$(RM) $(NAME) $(BONUS_OBJS)

#limpieza total + recompilacion
re: fclean all


bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)


#evita errores y garantia que se ejecuten (clean, fclean,re..) siempre
.PHONY: all clean fclean re