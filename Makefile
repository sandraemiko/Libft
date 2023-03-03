# ************************************************************************************** #
#                                                                                        #
#                                                                   :::      ::::::::    #
#    Makefile                                                     :+:      :+:    :+:    #
#                                                               +:+ +:+         +:+      #
#    By: <sandraemiko@prof.educacao.sp.gov.br>                +#+  +:+       +#+         #
#                                                           +#+#+#+#+#+   +#+            #
#    Created: 2021/10/17 21:35:31 by sandraemiko                 #+#    #+#              #
#    Updated: 2022/10/23 18:02:21 by sandraemiko                ###   ########.fr        #
#                                                                                        #
# ************************************************************************************** #

SRC	= ft_isalpha.c ft_isdigit.c ft_isalnum.c  ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c  ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
			

OBJS	= $(SRC:.c=.o)

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re





