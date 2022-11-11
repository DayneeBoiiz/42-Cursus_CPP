# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:26:29 by sayar             #+#    #+#              #
#    Updated: 2022/11/08 11:45:04 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Bureaucrat.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

${NAME} : Bureaucrat.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp Bureaucrat.hpp
	${CC} ${FLAGS} -c $< -o $@

.PHONY : all clean fclean re

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean re