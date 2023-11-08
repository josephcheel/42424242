NAME	=	libftprintf.a

SRCS	= ft_printf.c \
		  ft_printf_format.c \
		  ft_printf_char.c \
		  ft_printf_str.c \
		  ft_printf_nbr.c \
		  ft_printf_unsigned.c \
		  ft_printf_x.c \
		  ft_printf_x_uppercase.c \
		  ft_printf_ptr.c \
		  ft_printf_utils.c \

OBJS = ${SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM 		= 	rm -f

.c.o:
		$(CC) $(CFLAGS) -c  $< -o $(<:.c=.o)

$(NAME):	$(OBJS) ft_printf.h 
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS) 

fclean:		clean  
			$(RM) $(NAME)

re:			fclean all

