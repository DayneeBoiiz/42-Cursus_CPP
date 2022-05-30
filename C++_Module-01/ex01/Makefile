# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 22:49:02 by sayar             #+#    #+#              #
#    Updated: 2022/05/24 12:55:21 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Horde

CC = c++

FLAGS = -Wall -Wextra -Werror

SRC = 	Zombie.cpp\
		main.cpp\
		zombieHorde.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

${NAME} : Zombie.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

.PHONY : all clean fclean re

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all