# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sayar <sayar@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 18:41:00 by sayar             #+#    #+#              #
#    Updated: 2022/11/08 11:45:26 by sayar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILE = ShrubberyCreationForm_shrubbery

SRC =	Bureaucrat.cpp\
		Form.cpp\
		main.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\

OBJ = ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

${NAME} : Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	${CC} ${FLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}
	rm -rf ${FILE}

re : fclean all