# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 22:06:15 by sayar             #+#    #+#              #
#    Updated: 2022/05/31 22:11:39 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	Fixed.cpp\
		main.cpp\

PREFIX = ./obj/

OBJ = $(addprefix $(PREFIX), $(SRC:.cpp=.o))

all : ${NAME}

.PHONY : all clean fclean re

${PREFIX} : 
	@mkdir -p ${PREFIX}

$(PREFIX)%.o: %.cpp
	$(CC) ${FLAGS} -c -o $@ $<

${NAME} : Fixed.hpp ${PREFIX} ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}
	rm -rf ${PREFIX}

fclean : clean
	rm -rf ${NAME}

re : fclean all