NAME	=	 libft.a

CC	=	 gcc

CFLAGS	=	 -Werror -Wall -Wextra -MD

AR	=	 ar -r

SRC		=	 ft_atoi.c 			\
			 ft_bzero.c 		\
			 ft_calloc.c 		\
			 ft_isalnum.c 		\
			 ft_isalpha.c 		\
			 ft_isascii.c 		\
			 ft_isdigit.c 		\
			 ft_isprint.c 		\
			 ft_memchr.c 		\
			 ft_memcmp.c 		\
			 ft_memcpy.c 		\
			 ft_memmove.c 		\
			 ft_memset.c 		\
			 ft_strchr.c 		\
			 ft_strdup.c 		\
			 ft_strlcat.c 		\
			 ft_strlcpy.c 		\
			 ft_strlen.c 		\
			 ft_toupper.c 		\
			 ft_tolower.c 		\
			 ft_strrchr.c 		\
			 ft_strncmp.c 		\
			 ft_strnstr.c		\
			 ft_strjoin.c		\
			 ft_substr.c		\
			 ft_strtrim.c		\
			 ft_itoa.c			\
			 ft_strmapi.c		\
			 ft_striteri.c		\
			 ft_putchar_fd.c	\
			 ft_putstr_fd.c		\
			 ft_putendl_fd.c	\
			 ft_putnbr_fd.c		\
			 ft_putnbr_fd.c		\
			 ft_split.c

BONUS	 =	 ft_lstnew.c		\
			 ft_lstadd_front.c  \
			 ft_lstsize.c		\
			 ft_lstlast.c		\
			 ft_lstadd_back.c	\
			 ft_lstdelone.c		\
			 ft_lstclear.c		\
			 ft_lstiter.c	 	\
			 ft_lstmap.c

OBJS	 =	$(SRC:%.c=%.o)

OBJ_BONUS=	$(BONUS:%.c=%.o)

bonus	:	$(OBJS) $(OBJ_BONUS) libft.h
	$(AR) $(NAME) $(OBJ_BONUS) $(OBJS)

all	:	$(NAME)

$(NAME)	: 	$(OBJS) libft.h
	$(AR) $(NAME) $(OBJS)

%.o	:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS) $(OBJ_BONUS) *.d

fclean	: 	clean
	rm -rf $(NAME)

re	:	fclean all

.PHONY: clean fclean all re bonus
