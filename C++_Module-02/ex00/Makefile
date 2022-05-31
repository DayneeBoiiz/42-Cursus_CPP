# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 22:24:26 by sayar             #+#    #+#              #
#    Updated: 2022/05/28 22:27:40 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = c++

FALGS = -Wall -Werror -Wextra

SRC =	Fixed.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all :  ${NAME}

.PHONY : all clean fclean re

${NAME} : Fixed.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all