# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 21:32:33 by hmanilow          #+#    #+#              #
#    Updated: 2022/11/02 21:32:40 by hmanilow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= megaphone

SRCS	= megaphone.cpp

OBJS 	= $(SRCS:.cpp=.o)

CC 		= c++
RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -std=c++98

all:	$(NAME)

%.o:    %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean $(NAME)