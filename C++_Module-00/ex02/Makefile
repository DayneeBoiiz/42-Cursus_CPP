# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/22 15:28:54 by sayar             #+#    #+#              #
#    Updated: 2022/05/22 16:08:52 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = c++

FLAGS = -Wall -Wextra -Werror

SRC = 	Account.cpp\
		tests.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

${NAME} : Account.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all