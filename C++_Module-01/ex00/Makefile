# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 18:59:29 by sayar             #+#    #+#              #
#    Updated: 2022/05/23 19:03:35 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CC = c++

FLAGS = -Wall -Wextra -Werror

SRC = 	Zombie.cpp\
		main.cpp\
		newZombie.cpp\
		randomChump.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : Zombie.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all