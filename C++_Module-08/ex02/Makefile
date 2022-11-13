# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 21:29:45 by sayar             #+#    #+#              #
#    Updated: 2022/11/10 21:30:13 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Mutant

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : MutantStack.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp MutantStack.hpp
	${CC} ${FALGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all