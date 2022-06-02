# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 16:37:19 by sayar             #+#    #+#              #
#    Updated: 2022/06/02 16:41:22 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = point

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	Fixed.cpp\
		main.cpp\
		Point.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : Fixed.hpp Point.cpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all