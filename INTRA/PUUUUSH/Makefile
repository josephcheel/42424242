ifneq (,$(findstring xterm,${TERM}))
	BLACK        := $(shell tput -Txterm setaf 0)
	RED          := $(shell tput -Txterm setaf 1)
	GREEN        := $(shell tput -Txterm setaf 2)
	YELLOW       := $(shell tput -Txterm setaf 3)
	LIGHTPURPLE  := $(shell tput -Txterm setaf 4)
	PURPLE       := $(shell tput -Txterm setaf 5)
	BLUE         := $(shell tput -Txterm setaf 6)
	WHITE        := $(shell tput -Txterm setaf 7)
	RESET		 := $(shell tput -Txterm sgr0)
else
	BLACK        := ""
	RED          := ""
	GREEN        := ""
	YELLOW       := ""
	LIGHTPURPLE  := ""
	PURPLE       := ""
	BLUE         := ""
	WHITE        := ""
	RESET        := ""
endif

NAME		=	push_swap

CFLAGS	=  -W -Wall -Wextra -Werror 
XFLAGS	= -fsanitize=address -g2

AR		= ar -rcs
RM		= rm -f
MD		= mkdir -p
CP		= cp -f
CC		= gcc

SRC_DIR		= src/
OBJ_DIR		= obj/
INC_DIR		= inc/
MOVE_DIR	= movements/
ALG_DIR		= algorithm/

LIBFT = libft/libft.a

INCLUDE	= -I $(INC_DIR)

PS_SRC		= main.c 

UTILS_SRC	= checker.c create_stack.c stack_utils.c stack_utils2.c  reposition_stack.c find_index.c delete_stack.c

MOVE_SRC	= swap.c push.c rotate.c reverse_rotate.c

ALG_SRC		= algorithm.c order_two.c order_three.c order_five.c order_hundred.c


SRCS	+=	$(addprefix $(SRC_DIR), $(PS_SRC))
SRCS	+= 	$(addprefix $(SRC_DIR), $(UTILS_SRC))
SRCS	+=	$(addprefix $(SRC_DIR), $(addprefix $(MOVE_DIR), $(MOVE_SRC)))
SRCS	+=	$(addprefix $(SRC_DIR), $(addprefix $(ALG_DIR), $(ALG_SRC)))


$(OBJ_DIR)%.o: %.c Makefile
		@make -sC libft
		@$(MD) $(dir $@) 
		@echo "$(YELLOW)Compiling: $<$(RESET)"
		@$(CC)  -MT $@ -MMD -MP $(CFLAGS) $(INCLUDE) -c $< -o $@ 

all:		$(NAME)	
		@make -sC libft

$(NAME):	$(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
		@echo "$(GREEN)🧩PUSH SWAP COMPILED🧩$(RESET)"
	
clean:
		@$(RM) -r $(OBJ_DIR)
		@make clean -C libft
		@echo "$(RED)Dependencies and objects removed$(RESET)"

fclean:		clean  
		@$(RM) $(NAME) $(NAME_BONUS)
		@make fclean -C libft
		@echo "$(RED)$(NAME) Removed$(RESET)"
re:			fclean all

-include $(DEPS)
-include $(DEPS_BONUS)

.PHONY: all bonus clean fclean re 
