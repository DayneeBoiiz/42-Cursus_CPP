# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 14:23:35 by sayar             #+#    #+#              #
#    Updated: 2022/10/01 11:11:46 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wno-shadow -Wshadow

SRC =	ClapTrap.cpp\
		main.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\

OBJ = $(addprefix $(PREFIX), $(SRC:.cpp=.o))

all : ${NAME}

.PHOMY : all clean fclean re

${NAME} : ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp ${OBJ}
	${CC} ${FLAGS} -g ${OBJ} -o ${NAME}

$(PREFIX)%.o: %.cpp
	$(CC) ${FLAGS} -g -c -o $@ $<

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all
