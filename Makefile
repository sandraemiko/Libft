# ************************************************************************************************** #
#                                                                                                    #
#                                                                               :::      ::::::::    #
#    Makefile                                                                 :+:      :+:    :+:    #
#                                                                           +:+ +:+         +:+      #
#    By: sandraemiko <sandraemiko@prof.educacao.sp.gov.br>                +#+  +:+       +#+         #
#                                                                       +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 17:02:31 by sandraemiko                             #+#    #+#              #
#    Updated: 2023/03/16 17:15:31 by sandraemiko                             ###   ########.fr       #
#                                                                                                    #
# ************************************************************************************************** #

SRCS	= ft_isalpha.c	ft_isdigit.c ft_isalnum.c  ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c  ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	

			
OBJS	= $(SRCS:.c=.o)     
#--------------------------------------//---------------------------------------
SRCS_BONUS	= ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c ft_lstadd_back.c	\
	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c ft_lstmap.c \

			
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

#--------------------------------------//---------------------------------------
NAME	= libft.a 

FLAGS	= -Wall -Wextra -Werror              

CC		= cc 

#--------------------------------------//---------------------------------------
.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)  
#--------------------------------------//---------------------------------------
all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

	@echo "                                  :::      :::::::: "
	@echo "============================    :+:      :+:    :+: "
	@echo "                              +:+ +:+         +:+   "
	@echo "    libft.a  created        +#+  +:+       +#+      "
	@echo "                          +#+#+#+#+#+   +#+         "
	@echo "============================   #+#    #+#           "
	@echo "                               ###   ########.fr    "
												      
bonus:		$(OBJS_BONUS) 
			ar -rcs $(NAME) $(OBJS_BONUS)

	@echo "                                  :::      :::::::: "
	@echo "============================    :+:      :+:    :+: "
	@echo "                              +:+ +:+         +:+   "
	@echo "    Added bonus part        +#+  +:+       +#+      "
	@echo "                          +#+#+#+#+#+   +#+         "
	@echo "============================   #+#    #+#           "
	@echo "                               ###   ########.fr    "

#--------------------------------------//---------------------------------------
clean:
			rm -f $(OBJS) $(OBJS_BONUS) 

	@echo "                                  :::      :::::::: "
	@echo "============================    :+:      :+:    :+: "
	@echo "                              +:+ +:+         +:+   "
	@echo "    Deleted .o files        +#+  +:+       +#+      "
	@echo "                          +#+#+#+#+#+   +#+         "
	@echo "============================   #+#    #+#           "
	@echo "                               ###   ########.fr    "


fclean:		clean
			rm -f $(NAME)

	@echo "                                  :::      :::::::: "
	@echo "============================    :+:      :+:    :+: "
	@echo "                              +:+ +:+         +:+   "
	@echo "    Deleted libft.a         +#+  +:+       +#+      "
	@echo "                          +#+#+#+#+#+   +#+         "
	@echo "============================   #+#    #+#           "
	@echo "                               ###   ########.fr    "
	 
#--------------------------------------//---------------------------------------
re: 		fclean all

rebonus:	fclean bonus

.PHONY: 	all clean fclean re bonus rebonus 






