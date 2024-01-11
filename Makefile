# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osebbar <osebbar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 19:33:40 by osebbar           #+#    #+#              #
#    Updated: 2023/12/29 13:35:04 by osebbar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CC = cc
SOURCES =      ft_isalpha.c		   ft_memchr.c      ft_strchr.c       ft_strlcpy.c    
ft_strrchr.c   ft_atoi.c         ft_isascii.c     ft_memcmp.c       ft_strdup.c     
ft_strlen.c    ft_strtrim.c      ft_bzero.c       ft_isdigit.c      ft_memcpy.c    
ft_substr.c    ft_calloc.c       ft_isprint.c     ft_memmove.c      ft_strjoin.c    
ft_strncmp.c   ft_tolower.c      ft_isalnum.c     ft_memset.c       ft_strlcat.c    
ft_strnstr.c   ft_toupper.c      ft_split.c		    ft_itoa.c		      ft_striteri.c		
ft_strmapi.c	 ft_putchar_fd.c	 ft_putstr_fd.c	  ft_putnbr_fd.c	  ft_putendl_fd.c

OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

.o .c:
	$(CC)  $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
