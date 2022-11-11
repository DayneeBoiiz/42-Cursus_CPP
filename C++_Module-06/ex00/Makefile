# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 21:44:32 by sayar             #+#    #+#              #
#    Updated: 2022/11/10 15:35:19 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC =	Convert.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

.PHONY : all clean fclean re

all : ${NAME}

${NAME} : Convert.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Convert.hpp
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all