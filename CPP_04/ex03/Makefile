# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edassess <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 15:52:32 by edassess          #+#    #+#              #
#    Updated: 2021/09/14 14:59:12 by user             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

ERASE		=	\033[2K\r
GREY		=	\033[30m
RED			=	\033[31m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
PINK		=	\033[35m
CYAN		=	\033[36m
WHITE		=	\033[37m
BOLD		=	\033[1m
UNDER		=	\033[4m
SUR			=	\033[7m
END			=	\033[0m

NAME		= oueoueoue
OBJS		= $(SRCS:.cpp=.o)
HEADER		= AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp Ice.hpp MateriaSource.hpp
SRCS		= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
RM			= rm -f
CC			= clang++
CFLAGS		= -Wall -Werror -Wextra

all:
					@$(MAKE) $(NAME)

$(NAME): $(OBJS) $(HEADER)
					@printf "$(ERASE)"
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
					@echo "$(BOLD)$(GREEN)Compilation $(NAME) Succes !$(END)"

clean :
					@rm -rf $(OBJS)
					@echo "$(RED)Clean $(NAME) Succes !$(END)"

fclean :			clean
					@rm -f $(NAME)
					@echo "$(RED)Fclean $(NAME) Succes !$(END)"

re:					fclean all
