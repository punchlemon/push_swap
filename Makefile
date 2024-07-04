# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 20:23:46 by retanaka          #+#    #+#              #
#    Updated: 2024/06/13 15:18:19 by retanaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	push_swap
CHECKER					=	checker
COMMON_A				=	common.a
INCLUDE					=	include
LIBFT					=	libft
LIBFT_A					=	libft.a
SRC_DIR					=	src/
SOLVE_DIR				=	solve/
COMMON_DIR				=	common/
CHECKER_DIR				=	checker/
OBJ_DIR					=	obj/
CC						=	cc
RM						=	rm -f
AR						=	ar rcs

CFLAGS					=	-Wall -Werror -Wextra
CFLAGS					+=	-g -fsanitize=address,undefined
IFLAGS					=	 \
							-I$(INCLUDE) \
							-I$(LIBFT)/$(INCLUDE) \

# Colors
DEF_COLOR				=	\033[0;39m
GRAY					=	\033[0;90m
RED						=	\033[0;91m
GREEN					=	\033[0;92m
YELLOW					=	\033[0;93m
BLUE					=	\033[0;94m
MAGENTA					=	\033[0;95m
CYAN					=	\033[0;96m
WHITE					=	\033[0;97m

SOLVE_SRC_FILES			=	 \
							main \
							solve \
							opt_sort \

COMMON_SRC_FILES		=	 \
							create_num \
							create_stacks \
							check_stacks \
							create_stack \
							set_stacks \
							add_remove_stack \
							get_i_num_from_stack \
							map_rank \
							set_op \
							sp \
							r \
							rr \
							print_error \

CHECKER_SRC_FILES		=	 \
							main \
							read_op \

SOLVE_SRCS				=	$(addprefix $(SRC_DIR), $(addprefix $(SOLVE_DIR), $(addsuffix .c, $(SOLVE_SRC_FILES))))
COMMON_SRCS				=	$(addprefix $(SRC_DIR), $(addprefix $(COMMON_DIR), $(addsuffix .c, $(COMMON_SRC_FILES))))
CHECKER_SRCS			=	$(addprefix $(SRC_DIR), $(addprefix $(CHECKER_DIR), $(addsuffix .c, $(BONUS_SRC_FILES))))
SOLVE_OBJS				=	$(addprefix $(OBJ_DIR), $(addprefix $(SOLVE_DIR), $(addsuffix .o, $(SOLVE_SRC_FILES))))
COMMON_OBJS				=	$(addprefix $(OBJ_DIR), $(addprefix $(COMMON_DIR), $(addsuffix .o, $(COMMON_SRC_FILES))))
CHECKER_OBJS			=	$(addprefix $(OBJ_DIR), $(addprefix $(CHECKER_DIR), $(addsuffix .o, $(CHECKER_SRC_FILES))))
SRCS					=	$(COMMON_SRCS) $(SOLVE_SRCS)
BONUS_SRCS				=	$(COMMON_SRCS) $(CHECKER_SRCS)
OBJS					=	$(COMMON_OBJS) $(SOLVE_OBJS)
BONUS_OBJS				=	$(COMMON_OBJS) $(CHECKER_OBJS)
OBJ_FLAG				=	.obj_f
SOLVE_OBJ_FLAG			=	.solve_obj_f
COMMON_OBJ_FLAG			=	.common_obj_f
CHECKER_OBJ_FLAG		=	.checker_obj_f

$(OBJ_DIR)$(SOLVE_DIR)%.o:		$(SRC_DIR)$(SOLVE_DIR)%.c | $(SOLVE_OBJ_FLAG)
								$(call compile_solve)

$(OBJ_DIR)$(COMMON_DIR)%.o:		$(SRC_DIR)$(COMMON_DIR)%.c | $(COMMON_OBJ_FLAG)
								$(call compile_common)

$(OBJ_DIR)$(CHECKER_DIR)%.o:	$(SRC_DIR)$(CHECKER_DIR)%.c | $(CHECKER_OBJ_FLAG)
								$(call compile_checker)

$(OBJ_FLAG):
							@mkdir -p $(OBJ_DIR)

$(SOLVE_OBJ_FLAG):
							@mkdir -p $(OBJ_DIR)$(SOLVE_DIR)

$(COMMON_OBJ_FLAG):
							@mkdir -p $(OBJ_DIR)$(COMMON_DIR)

$(CHECKER_OBJ_FLAG):
							@mkdir -p $(OBJ_DIR)$(CHECKER_DIR)

SOLVE_OBJS_LEN				=	$(words $(SOLVE_OBJS))
COMMON_OBJS_LEN				=	$(words $(COMMON_OBJS))
CHECKER_OBJS_LEN			=	$(words $(CHECKER_OBJS))
COMPILED_SOLVE_OBJS_LEN		=	0
COMPILED_COMMON_OBJS_LEN	=	0
COMPILED_CHECKER_OBJS_LEN	=	0

PROGRESS_BAR_LENGTH			=	40

define compile_solve
	$(eval COMPILED_SOLVE_OBJS_LEN=$(shell echo $$(($(COMPILED_SOLVE_OBJS_LEN)+1))))
	@$(call update_progress,$(COMPILED_SOLVE_OBJS_LEN),$(SOLVE_OBJS_LEN), "Push_swap\ solve\ Compiling")
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
endef

define compile_common
	$(eval COMPILED_COMMON_OBJS_LEN=$(shell echo $$(($(COMPILED_COMMON_OBJS_LEN)+1))))
	@$(call update_progress,$(COMPILED_COMMON_OBJS_LEN),$(COMMON_OBJS_LEN), "Push_swap\ common\ Compiling")
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
endef

define compile_checker
	$(eval COMPILED_CHECKER_OBJS_LEN=$(shell echo $$(($(COMPILED_CHECKER_OBJS_LEN)+1))))
	@$(call update_progress,$(COMPILED_CHECKER_OBJS_LEN),$(CHECKER_OBJS_LEN), "Push_swap\ checker\ Compiling")
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
endef

define update_progress
	$(eval BAR_LENGTH=$(shell echo "scale=0; $(PROGRESS_BAR_LENGTH) *$1 / $2" | bc))
	$(eval REMAINING_LENGTH=$(shell echo "$(PROGRESS_BAR_LENGTH) - $(BAR_LENGTH)" | bc))
	@printf "\033[?25l" # Hide cursor
	@printf "\r" # Move cursor to the beginning of the line
	@printf "$(DEF_COLOR)$3\r\033[40C[$(DEF_COLOR)"
	@i=0; \
	while [ $$i -lt $(BAR_LENGTH) ]; do \
		printf "$(RED)=$(DEF_COLOR)"; \
		i=$$(($$i+1)); \
	done # Progress bar
	@i=0; \
	while [ $$i -lt $(REMAINING_LENGTH) ]; do \
		printf "$(GRAY)-$(DEF_COLOR)"; \
		i=$$(($$i+1)); \
	done # Remaining bar
	@printf "$(DEF_COLOR)] %2d / %2d $(DEF_COLOR)" $1 $2;
endef

all:				$(NAME)
					@printf "\r"
					@printf " Push_swap Compiled!               $(DEF_COLOR)\n"
					@printf "\033[?25h" # Show cursor

$(NAME):			$(LIBFT)/$(LIBFT_A) $(COMMON_A) $(SOLVE_OBJS)
					@$(CC) $(CFLAGS) $(IFLAGS) $(SOLVE_OBJS) $(COMMON_A) $(LIBFT)/$(LIBFT_A) -o $(NAME)

$(COMMON_A):		$(COMMON_OBJS)
					@$(AR) $(COMMON_A) $(COMMON_OBJS)
					@printf "\r"
					@printf " Push_swap common.a Compiled!$(DEF_COLOR)\n"
					@printf "\033[?25h" # Show cursor

bonus:				$(CHECKER)
					@printf "\r"
					@printf " Push_swap Checker Compiled!$(DEF_COLOR)\n"
					@printf "\033[?25h" # Show cursor

$(CHECKER):			$(LIBFT)/$(LIBFT_A) $(COMMON_A) $(CHECKER_OBJS)
					@$(CC) $(CFLAGS) $(IFLAGS) $(COMMON_A) $(CHECKER_OBJS) $(LIBFT)/$(LIBFT_A) -o $(CHECKER)

$(LIBFT)/$(LIBFT_A):
					@make extend -C $(LIBFT)

libft_clean:
					@make clean -C $(LIBFT)

libft_fclean:
					@make fclean -C $(LIBFT)

push_swap_clean:
					@$(RM) -r $(OBJ_DIR)
					@echo "$(BLUE) Push_swap object files Cleaned!$(DEF_COLOR)"

clean:				libft_clean push_swap_clean

fclean:				libft_fclean push_swap_clean
					@$(RM) $(NAME) $(COMMON_A) $(CHECKER)
					@echo "$(CYAN) Push_swap executable files Cleaned!$(DEF_COLOR)"

re:					fclean all
					@echo "$(GREEN)Cleaned and Rebuilt everything for Push_swap!$(DEF_COLOR)"

norm:
					@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

.PHONY:				all bonus clean fclean re norm
