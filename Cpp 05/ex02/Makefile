NAME		= Bureaucrat

CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= c++
RM			= rm -f

OBJ			= ${SRC:.cpp=.o}
SRC			= main.cpp \
			  Bureaucrat.cpp \
			  Form.cpp \
			  PresidentialPardonForm.cpp \
			  RobotomyRequestForm.cpp \
			  ShrubberyCreationForm.cpp \

INC			= Bureaucrat.hpp \
			  Form.hpp \
			  PresidentialPardonForm.hpp \
			  RobotomyRequestForm.hpp \
			  ShrubberyCreationForm.hpp \


${NAME}:	${OBJ}
					${CC} ${CFLAGS} ${OBJ} -o $@

%.o:%.cpp ${INC}
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

clean:
					${RM} ${OBJ}

fclean:		clean
					${RM} ${NAME}

re: 			fclean all

.PHONY : 	all clean fclean re