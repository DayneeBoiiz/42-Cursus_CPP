# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 14:23:35 by sayar             #+#    #+#              #
#    Updated: 2022/09/27 17:38:51 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = c++

FLAGS = -Wall -Werror -Wextra

SRC =	ClapTrap.cpp\
		main.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\

OBJ = $(addprefix $(PREFIX), $(SRC:.cpp=.o))

all : ${NAME}

.PHOMY : all clean fclean re

${NAME} : ClapTrap.hpp ScavTrap.hpp FragTrap.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

$(PREFIX)%.o: %.cpp
	$(CC) ${FLAGS} -c -o $@ $<

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all