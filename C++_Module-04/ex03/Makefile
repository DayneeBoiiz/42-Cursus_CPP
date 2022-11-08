# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 12:24:03 by sayar             #+#    #+#              #
#    Updated: 2022/11/05 12:39:22 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC = 	AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		main.cpp\
		MateriaSource.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	${CC} ${FLAGS} -c -o $@ $<

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all