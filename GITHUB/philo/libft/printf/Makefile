NAME	=	libftprintf.a

CFLAGS =  -W -Wall -Wextra -Werror
XFLAGS	= -fsanitize=address -g2
AR		= ar -rcs
RM		= rm -f
MD		= mkdir -p
CP		= cp -f


PRINTF_SRCS	= ft_printf.c \
		  ft_printf_format.c \
		  ft_printf_char.c \
		  ft_printf_str.c \
		  ft_printf_nbr.c \
		  ft_printf_unsigned.c \
		  ft_printf_x.c \
		  ft_printf_x_uppercase.c \
		  ft_printf_ptr.c \
		  ft_printf_utils.c \

SRC_DIR = src/
INC_DIR = inc/
OBJ_DIR = obj/

INCLUDE = -I $(INC_DIR)

SRCS	+= $(addprefix $(SRC_DIR), $(PRINTF_SRCS))
OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))


$(OBJ_DIR)%.o: %.c Makefile
		@$(MD) $(dir $@)
		@echo "	Compiling: $<"
		@$(CC) -MT $@ -MMD $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):	$(OBJS) 
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) -r $(OBJ_DIR) 

fclean:		clean  
			$(RM) $(NAME)

re:		fclean all

-include $(DEPS)

.PHONY:	all clean fclean re
