NAME		=	libft.a
OBJ_DIR		=	./obj
CC			=	gcc
FLAGS		=	-Wall -Werror -Wextra
COMPILE		=	$(CC) $(FLAGS)

SRC			=	ft_atoi.c \
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
				ft_toupper.c \
				\
				ft_printf/ft_printf.c \
				ft_printf/helpers.c \
				ft_printf/hex_helpers.c \
				ft_printf/num_helpers.c \
				\
				get_next_line/get_next_line.c \
				get_next_line/get_next_line_utils.c \

BONUS		=	$(SRC) \
				ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

BONUS_OBJ	=	$(BONUS:.c=.o)
OBJ			=	$(SRC:.c=.o)
HEADER		=	libft.h ft_printf/ft_printf.h get_next_line/get_next_line.h

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -crs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	@$(COMPILE) -c $< -o $@ 

bonus : $(BONUS_OBJ)
	@ar -crs $(NAME) $^

re: fclean all

clean :
	@rm -rf $(OBJ)
	@rm -rf $(BONUS_OBJ)

fclean : clean
	@rm -f $(NAME)