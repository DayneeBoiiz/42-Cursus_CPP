# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 23:11:19 by sayar             #+#    #+#              #
#    Updated: 2022/06/04 23:14:25 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	ClapTrap.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHOMY : all clean fclean re

${NAME} : ClapTrap.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all