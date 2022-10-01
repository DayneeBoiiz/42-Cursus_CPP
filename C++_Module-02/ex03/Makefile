# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar <sayar@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 16:37:19 by sayar             #+#    #+#              #
#    Updated: 2022/06/02 16:41:22 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = point

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	Fixed.cpp\
		main.cpp\
		Point.cpp\

PREFIX = ./obj/

OBJ = $(addprefix $(PREFIX), $(SRC:.cpp=.o))

all : ${NAME}

.PHONY : all clean fclean re

${PREFIX} : 
	@mkdir -p ${PREFIX}

$(PREFIX)%.o: %.cpp
	$(CC) ${FLAGS} -c -o $@ $<

${NAME} : Fixed.hpp Point.hpp ${PREFIX} ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}
	rm -rf ${PREFIX}

fclean : clean
	rm -rf ${NAME}

re : fclean all