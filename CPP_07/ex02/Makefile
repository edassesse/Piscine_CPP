# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edassess <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 15:52:32 by edassess          #+#    #+#              #
#    Updated: 2021/09/22 18:58:05 by user             ###   ########lyon.fr    #
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

NAME		= CPP_07
OBJS		= $(SRCS:%.cpp=%.o)
DEPENDS		= $(OBJS:%.o=%.d)
HEADER		= ./Array.hpp
SRCS		= ./main.cpp
RM			= rm -f
CC			= clang++
CFLAGS		= -Wall -Werror -Wextra -std=c++98 -I.

all:				$(NAME)

$(NAME):			$(OBJS) $(HEADER)
					@printf "$(ERASE)"
					@$(CC) $(CFLAGS) $(OBJS) -o $@
					@echo "$(BOLD)$(GREEN)Compilation $(NAME) Succes !$(END)"

%.o: %.cpp $(HEADER)
					@$(CC) $(CFLAGS) -MMD -o $@ -c $<
					@printf "$(ERASE)$(YELLOW)$@$(END)"

-include			$(DEPENDS)

clean :
					@rm -rf $(OBJS)
					@rm $(DEPENDS)
					@echo "$(RED)Clean $(NAME) Succes !$(END)"

fclean :			clean
					@rm -f $(NAME)
					@echo "$(RED)Fclean $(NAME) Succes !$(END)"

re:					fclean all

.PHONY:				all clean fclean re
