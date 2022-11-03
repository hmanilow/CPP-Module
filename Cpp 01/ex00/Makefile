NAME		= BraiiiiiiinnnzzzZ

CFLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= c++
RM			= rm -f

OBJ			= ${SRC:.cpp=.o}
SRC			= main.cpp \
			  newZombie.cpp \
			  randomChump.cpp \
			  Zombie.cpp \

INC			= Zombie.hpp \
			  Zombie.h \

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