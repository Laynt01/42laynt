# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvtorre <alvtorre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 22:42:37 by alvtorre          #+#    #+#              #
#    Updated: 2022/05/24 21:16:39 by alvtorre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a 

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strlcat.c\
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		  ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		  ft_putnbr_fd.c

OBJS	=	${SRCS:.c=.o}

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS	=	${BONUS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g 

RM		= rm -f

all: ${NAME}

${NAME}:	
		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}
# Rule to remove all the object files and directory.		
clean:
			${RM} ${OBJS} ${BONUS_OBJS}
# Rule to remove everything that has been created by the makefile.
fclean:		clean
				${RM} ${NAME}
# Rule to re-make everything.
re:			fclean all


# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all, clean, fclean, re
