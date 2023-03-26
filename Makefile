NAME		=	libft.a
OBJ_DIR		=	./obj
CC			=	gcc
FLAGS		=	-Wall -Werror -Wextra
COMPILE		=	$(CC) $(FLAGS)

SRC			:=	ft_atoi.c \
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
				ft_printf.c \
				helpers.c \
				hex_helpers.c \
				num_helpers.c \
				\
				get_next_line.c \
				get_next_line_utils.c \
				\
				ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJ			:=	$(SRC:%.c=$(OBJ_DIR)/%.o)
DEP			:=	$(OBJ:%.o=%.d)
HEADER		:=	-I libft.h \
				-I ft_printf \
				-I get_next_line

-include $(DEP)

echo:
	@echo $(OBJ)
	echo
	@echo $(SRC)
	echo
	@echo $(DEP)

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ)
	@ar -crs $(NAME) $(OBJ)

$(OBJ_DIR):
	@mkdir -p $(@)

$(OBJ_DIR)/%.o : %.c
	@$(COMPILE) -MMD $(HEADER) -c $< -o $@

re: fclean all

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -f $(NAME)

.DEFAULT_GOAL := all