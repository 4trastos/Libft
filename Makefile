
NAME = libft.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isdigit.o ft_strchr.o ft_strrchr.o ft_atoi.o ft_isprint.o ft_strdup.o ft_tolower.o ft_bzero.o ft_memchr.o ft_strlcat.o ft_toupper.o ft_calloc.o ft_memchr.o ft_memcmp.o ft_strlcpy.o ft_isalnum.o ft_memcpy.o ft_strlen.o ft_isalpha.o ft_memmove.o ft_strncmp.o ft_isascii.o ft_memset.o ft_strnstr.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o  ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putendl_fd.o ft_putnbr_fd.o
SRCS_BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

OBJS = $(SRCS: .c=.o)

OBJS_BONUS = $(SRCS_BONUS: .c=.o)

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
