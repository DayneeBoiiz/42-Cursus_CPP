# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 13:15:38 by sayar             #+#    #+#              #
#    Updated: 2022/11/09 15:43:11 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

.PHONY : all clean fclean re

all : ${NAME}

${NAME} : A.hpp B.hpp Base.hpp C.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp A.hpp B.hpp Base.hpp C.hpp
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all
