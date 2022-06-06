# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 15:58:01 by sayar             #+#    #+#              #
#    Updated: 2022/06/06 16:35:59 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC = 	ClapTrap.cpp\
		ScavTrap.cpp\
		main.cpp\
		FragTrap.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean

${NAME} : ScavTrap.hpp ClapTrap.hpp FragTrap.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all