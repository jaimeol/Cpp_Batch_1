# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 15:33:38 by jolivare          #+#    #+#              #
#    Updated: 2024/05/16 21:00:24 by jolivare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Harl.cpp main.cpp
OBJECTS = $(SRC:.cpp=.o)
INCLUDES = -I $(CURDIR)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harlFilter

all: $(NAME)
	
$(NAME): $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
