# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 19:20:17 by davgalle          #+#    #+#              #
#    Updated: 2023/10/06 19:28:55 by davgalle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS                    = ft_atoi.c \
                      ft_bzero.c \
                      ft_calloc.c \
                      ft_isalnum.c \
                      ft_itoa.c \
                      ft_isalpha.c \
                      ft_isascii.c \
                      ft_isdigit.c \
                      ft_isprint.c \
                      ft_memchr.c \
                      ft_memcmp.c \
                      ft_memcpy.c \
                      ft_memmove.c \
                      ft_memset.c \
                      ft_split.c \
                      ft_strchr.c \
                      ft_strdup.c \
                      ft_striteri.c \
                      ft_strlcat.c \
                      ft_strlcpy.c \
                      ft_strlen.c \
                      ft_strncmp.c \
                      ft_strnstr.c \
                      ft_strrchr.c \
                      ft_strjoin.c \
                      ft_strtrim.c \
                      ft_strmapi.c \
                      ft_substr.c \
                      ft_tolower.c \
                      ft_toupper.c \
                      ft_putchar_fd.c \
                      ft_putstr_fd.c \
                      ft_putendl_fd.c \
                      ft_putnbr_fd.c
BONUS_SRCS                = ft_lstsize_bonus.c \
                    ft_lstadd_front_bonus.c \
                    ft_lstclear_bonus.c \
                    ft_lstdelone_bonus.c \
                    ft_lstiter_bonus.c \
                    ft_lstlast_bonus.c \
                    ft_lstmap_bonus.c \
                    ft_lstadd_back_bonus.c \
                    ft_lstnew_bonus.c
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(BONUS_SRCS:.c=.o)

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS_BONUS)
				ar rcs $(NAME) $(OBJS_BONUS)

.PHONY:			all clean fclean re bonus
