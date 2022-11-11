# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 18:17:23 by sayar             #+#    #+#              #
#    Updated: 2022/11/08 11:45:15 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	Bureaucrat.cpp\
		Form.cpp\
		main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : Bureaucrat.hpp Form.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Form.hpp Bureaucrat.hpp
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all