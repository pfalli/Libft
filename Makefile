NAME =	libft.a
SRC	=	$(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi)
OBJS :=	$(SRC:%.c=%.o) #per each .c file will create a .o file

CC=	gcc	#variable containing the compailer

CCFLAGS	=	-Wall -Werror -Wextra #compiler flags

INC_DIR	=	. # to include a header file

CPPFLAGS =-I$(INC_DIR)

RM =	rm -f #alias

ARNAME =	ar rcs $(NAME) #alias

RANNAME =	ranlib $(NAME) #alias

all: libft.a

$(NAME): $(OBJS)
	$(ARNAME)
	$(RANNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 