# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 14:23:35 by sayar             #+#    #+#              #
#    Updated: 2022/09/27 17:24:21 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	ClapTrap.cpp\
		main.cpp\
		ScavTrap.cpp\

OBJ = $(addprefix $(PREFIX), $(SRC:.cpp=.o))

all : ${NAME}

.PHOMY : all clean fclean re

${NAME} : ClapTrap.hpp ScavTrap.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

$(PREFIX)%.o: %.cpp
	$(CC) ${FLAGS} -c -o $@ $<

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all