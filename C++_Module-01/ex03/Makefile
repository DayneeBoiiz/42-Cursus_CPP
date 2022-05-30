# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 15:07:20 by sayar             #+#    #+#              #
#    Updated: 2022/05/24 15:25:50 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC = 	HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : HumanA.hpp HumanB.hpp Weapon.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all