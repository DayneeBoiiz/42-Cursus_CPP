# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 22:10:51 by sayar             #+#    #+#              #
#    Updated: 2022/11/08 22:14:20 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ser

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

.PHONY : all clean fclean re

all : ${NAME}

${NAME} : Serialization.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Serialization.hpp
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all