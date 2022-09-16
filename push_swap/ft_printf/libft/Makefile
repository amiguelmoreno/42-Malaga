# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 10:11:34 by antmoren          #+#    #+#              #
#    Updated: 2022/05/06 09:57:15 by antmoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	=	ft_isalnum.c	\
			ft_isalpha.c 	\
			ft_isascii.c 	\
			ft_isdigit.c	\
			ft_isprint.c 	\
			ft_strlen.c		\
			ft_strncmp.c 	\
			ft_strlcat.c 	\
			ft_strlcpy.c	\
			ft_strchr.c 	\
			ft_strrchr.c	\
			ft_toupper.c 	\
			ft_tolower.c	\
			ft_atoi.c		\
			ft_bzero.c		\
			ft_memset.c		\
			ft_memcpy.c		\
			ft_memmove.c 	\
			ft_memchr.c 	\
			ft_memcmp.c 	\
			ft_strnstr.c	\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c 	\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c 	\
			ft_putstr_fd.c 	\
			ft_itoa.c 		\
			ft_strmapi.c 	\
			ft_striteri.c 	\

SRCS_BONUS =	ft_lstnew_bonus.c		\
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c 		\
				ft_lstlast_bonus.c 		\
				ft_lstadd_back_bonus.c 	\
				ft_lstdelone_bonus.c 	\
				ft_lstclear_bonus.c 	\
				ft_lstiter_bonus.c  	\
				ft_lstmap_bonus.c 		\
				

OBJS	=	${SRCS:.c=.o}
# Indica que para cada archivo .c tiene que haber un archivo .o

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}
# Indica que para cada archivo .c tiene que haber un archivo .o

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f
AR 		= 	ar rcs

all: ${NAME}
# Hace todas las reglas y subreglas 

${NAME} : ${OBJS}
	$(AR) ${NAME} ${OBJS}
# Crea la librería (libft.a)

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $?

%o: %.c 
	${CC} ${CFLAGS} -c $< -o $@
# Transforma los archivos .c en .o y cambia el nombre del output para los archivos .o

clean: 
	${RM} ${OBJS} ${OBJS_BONUS}
# Borra los ejecutables de las funciones

fclean: clean
	${RM} ${NAME}
# Borra los ejecutables de las funciones y de la librería

re: fclean all
# Resetea la carpeta, es decir, borra los ejecutables creados y los crea de nuevo

.PHONY:	all bonus clean fclean re
# Sirve para que las reglas funcionen correctamente aunque haya archivos con el mismo nombre 

