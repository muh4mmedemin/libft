NAME = libft.a
SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

OBJ = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
rm = rm -rf

all: $(NAME)
#*.o delete 
$(NAME): $(OBJ)
		ar rc $(NAME) *.o 
#This Area For git.
MESSAGE = "bug fix for ft_strtrim, update strnstr "
GADD = git add .
GCOM = git commit -m $(MESSAGE)
GPUSH = git push git@github.com:muh4mmedemin/libft.git 

gsend: 
	$(GADD) 
	$(GCOM) 
	$(GPUSH) 

#This Area For git.

checkNorm:
	norminette $(SRCS)

.c.o:
	cc		$(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean
