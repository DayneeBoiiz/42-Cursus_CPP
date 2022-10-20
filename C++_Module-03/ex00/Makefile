# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 23:11:19 by sayar             #+#    #+#              #
#    Updated: 2022/09/27 17:13:59 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	ClapTrap.cpp\
		main.cpp\

OBJ = $(addprefix $(PREFIX), $(SRC:.cpp=.o))

all : ${NAME}

.PHOMY : all clean fclean re

${NAME} : ClapTrap.hpp  $(PREFIX) ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

$(PREFIX)%.o: %.cpp
	$(CC) ${FLAGS} -c -o $@ $<

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all