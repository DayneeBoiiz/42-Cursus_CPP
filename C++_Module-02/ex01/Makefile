# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 14:47:30 by sayar             #+#    #+#              #
#    Updated: 2022/05/31 14:49:53 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = c++

FLAGS = -Wall -Wextra -Werror

SRC =	Fixed.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : Fixed.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all