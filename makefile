# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kryrodri <kryrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 11:09:46 by kryrodri          #+#    #+#              #
#    Updated: 2023/05/30 10:18:55 by kryrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror

# Nombre del proyecto
NAME	= libft.a

# Archivos que uso al compilar
FUNCTION	=  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c  ft_isprint.c \
				ft_strlen.c ft_memset.c ft_bzero.c  ft_memcpy.c  ft_memmove.c \
				ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
				ft_strnstr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
				

# Tenemos que transformar los .c en .o para poder compilar
OBJS	= $(FUNCTION:.c=.o)

# La libreria
HEADER	= libft.h

# Se compila el archivo binario (ejecutable).
all: ${NAME}

# Se compila los objetos con las librerias y archivos.
# ${NAME}: ${OBJS} ${HEADER}
# 	@echo "ejecutando ${NAME}"
# 	$(CC) $(FLAGS) main.c ${OBJS} -o ${NAME}

# Si no tuvieramos main.c usariamos el ar rcs en su lugar.
${NAME}: ${OBJS} ${HEADER}
	@echo "Generando la libreria ${NAME}..."
	ar rcs $(NAME) ${OBJS}

# Mirar google TODO
%.o: %.c
	@echo "Compilando el objeto $@..."
	$(CC) -c $(FLAGS) $< -o $@
#	gcc -c -Wall -Wextra -Werror ...
# $@  = (todos los .o)
# $< = (Todos los inputs, seria todos los .c y su header (.h))
# -c es para convertir los .c en .o (.o = objetos, listos para usar)

# -f es para decir que si no existen ignoralos (evitando avisos como de errores innecesarios.)
clean:
	@echo "Ejecutando clean..."
	rm -f $(OBJS) 

fclean: clean
	@echo "Ejecutando fclean..."
	rm -f $(NAME)

re: fclean all
	@echo "Ejecutando re..."

# Le dice al make que estos nombre no son archivos
.PHONY: re fclean clean all