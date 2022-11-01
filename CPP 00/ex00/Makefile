NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

CPP		=	clang++

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean

re:			fclean $(NAME)

.PHONY:		all clean fclean re