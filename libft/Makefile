# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: retanaka <retanaka@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 19:53:52 by retanaka          #+#    #+#              #
#    Updated: 2024/06/13 15:09:43 by retanaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME							=	libft.a
EXTEND_NAME						=	libft_extend.a
INCLUDES_DIR					=	include/
SRC_DIR							=	src/
IS_DIR							=	is/
MEM_DIR							=	mem/
PUT_DIR							=	put/
STR_DIR							=	str/
TO_DIR							=	to/
LST_DIR							=	lst/
GNL_DIR							=	get_next_line/
FT_PRINTF_DIR					=	ft_printf/
OBJ_DIR							=	obj/
IS_OBJ_DIR						=	is_obj/
MEM_OBJ_DIR						=	mem_obj/
PUT_OBJ_DIR						=	put_obj/
STR_OBJ_DIR						=	str_obj/
TO_OBJ_DIR						=	to_obj/
LST_OBJ_DIR						=	lst_obj/
FT_PRINTF_OBJ_DIR				=	ft_printf_obj/
CC								=	cc
CFLAGS							=	-Wall -Wextra -Werror
IFLAGS							=	-I$(INCLUDES_DIR)
RM								=	rm -f
AR								=	ar rcs

# Colors
DEF_COLOR						=	\033[0;39m
GRAY							=	\033[0;90m
RED								=	\033[0;91m
GREEN							=	\033[0;92m
YELLOW							=	\033[0;93m
BLUE							=	\033[0;94m
MAGENTA							=	\033[0;95m
CYAN							=	\033[0;96m
WHITE							=	\033[0;97m

IS_FILES						= 	 \
									ft_isalpha \
									ft_isdigit \
									ft_isalnum \
									ft_isascii \
									ft_isprint \

MEM_FILES						=	 \
									ft_bzero \
									ft_calloc \
									ft_memset \
									ft_memcpy \
									ft_memmove \
									ft_memchr \
									ft_memcmp \

PUT_FILES						=	 \
									ft_putchar_fd \
									ft_putstr_fd \
									ft_putendl_fd \
									ft_putnbr_fd \

STR_FILES						=	 \
									ft_strlen \
									ft_strlcpy \
									ft_strlcat \
									ft_strchr \
									ft_strrchr \
									ft_strncmp \
									ft_strnstr \
									ft_strdup \
									ft_strjoin \
									ft_strtrim \
									ft_substr \
									ft_split \
									ft_strmapi \
									ft_striteri \

TO_FILES						=	 \
									ft_toupper \
									ft_tolower \
									ft_atoi \
									ft_itoa \

LST_FILES						=	 \
									ft_lstnew_bonus \
									ft_lstadd_front_bonus \
									ft_lstsize_bonus \
									ft_lstlast_bonus \
									ft_lstadd_back_bonus \
									ft_lstdelone_bonus \
									ft_lstclear_bonus \
									ft_lstiter_bonus \
									ft_lstmap_bonus \

GNL_FILES						=	 \
									get_next_line_bonus \
									get_next_line_utils_bonus \

FT_PRINTF_FILES					=	 \
									ft_printf \
									ft_printf_base \
									ft_printf_base_check \
									ft_putdec \
									ft_puthex \
									ft_putptr \
									ft_putoct \
									ft_putnumber_base \

IS_SRCS							=	$(addprefix $(SRC_DIR), $(addprefix $(IS_DIR), $(addsuffix .c, $(IS_FILES)))) 
MEM_SRCS						=	$(addprefix $(SRC_DIR), $(addprefix $(MEM_DIR), $(addsuffix .c, $(MEM_FILES))))
PUT_SRCS						=	$(addprefix $(SRC_DIR), $(addprefix $(PUT_DIR), $(addsuffix .c, $(PUT_FILES))))
STR_SRCS						=	$(addprefix $(SRC_DIR), $(addprefix $(STR_DIR), $(addsuffix .c, $(STR_FILES))))
TO_SRCS							=	$(addprefix $(SRC_DIR), $(addprefix $(TO_DIR), $(addsuffix .c, $(TO_FILES))))
LST_SRCS						=	$(addprefix $(SRC_DIR), $(addprefix $(LST_DIR), $(addsuffix .c, $(LST_FILES))))
GNL_SRCS						=	$(addprefix $(SRC_DIR), $(addprefix $(GNL_DIR), $(addsuffix .c, $(GNL_FILES))))
FT_PRINTF_SRCS					=	$(addprefix $(SRC_DIR), $(addprefix $(FT_PRINTF_DIR), $(addsuffix .c, $(FT_PRINTF_FILES))))
IS_OBJS							=	$(addprefix $(OBJ_DIR), $(addprefix $(IS_OBJ_DIR), $(addsuffix .o, $(IS_FILES))))
MEM_OBJS						=	$(addprefix $(OBJ_DIR), $(addprefix $(MEM_OBJ_DIR), $(addsuffix .o, $(MEM_FILES))))
PUT_OBJS						=	$(addprefix $(OBJ_DIR), $(addprefix $(PUT_OBJ_DIR), $(addsuffix .o, $(PUT_FILES))))
STR_OBJS						=	$(addprefix $(OBJ_DIR), $(addprefix $(STR_OBJ_DIR), $(addsuffix .o, $(STR_FILES))))
TO_OBJS							=	$(addprefix $(OBJ_DIR), $(addprefix $(TO_OBJ_DIR), $(addsuffix .o, $(TO_FILES))))
LST_OBJS						=	$(addprefix $(OBJ_DIR), $(addprefix $(LST_OBJ_DIR), $(addsuffix .o, $(LST_FILES))))
GNL_OBJS						=	$(addprefix $(OBJ_DIR), $(addprefix $(GNL_OBJ_DIR), $(addsuffix .o, $(GNL_FILES))))
FT_PRINTF_OBJS					=	$(addprefix $(OBJ_DIR), $(addprefix $(FT_PRINTF_OBJ_DIR), $(addsuffix .o, $(FT_PRINTF_FILES))))
SRCS							=	$(IS_SRCS) $(MEM_SRCS) $(PUT_SRCS) $(STR_SRCS) $(TO_SRCS)
BONUS_SRCS						=	$(LST_SRCS)
EXTEND_SRCS						=	$(GNL_SRCS) $(FT_PRINTF_SRCS)
OBJS 							=	$(IS_OBJS) $(MEM_OBJS) $(PUT_OBJS) $(STR_OBJS) $(TO_OBJS)
BONUS_OBJS						=	$(LST_OBJS)
EXTEND_OBJS						=	$(GNL_OBJS) $(FT_PRINTF_OBJS)
OBJ_FLAG						=	.obj_f
IS_OBJ_FLAG						=	.is_obj_f
MEM_OBJ_FLAG					=	.mem_obj_f
PUT_OBJ_FLAG					=	.put_obj_f
STR_OBJ_FLAG					=	.str_obj_f
TO_OBJ_FLAG						=	.to_obj_f
LST_OBJ_FLAG					=	.lst_obj_f
GNL_OBJ_FLAG					=	.gnl_obj_f
FT_PRINTF_OBJ_FLAG				=	.ft_printf_obj_f

$(OBJ_DIR)$(IS_OBJ_DIR)%.o:			$(SRC_DIR)$(IS_DIR)%.c | $(IS_OBJ_FLAG)
									$(call compile)

$(OBJ_DIR)$(MEM_OBJ_DIR)%.o:		$(SRC_DIR)$(MEM_DIR)%.c | $(FLAG_FLAG) $(MEM_OBJ_FLAG)
									$(call compile)

$(OBJ_DIR)$(PUT_OBJ_DIR)%.o:		$(SRC_DIR)$(PUT_DIR)%.c | $(FLAG_FLAG) $(PUT_OBJ_FLAG)
									$(call compile)

$(OBJ_DIR)$(STR_OBJ_DIR)%.o:		$(SRC_DIR)$(STR_DIR)%.c | $(FLAG_FLAG) $(STR_OBJ_FLAG)
									$(call compile)

$(OBJ_DIR)$(TO_OBJ_DIR)%.o:			$(SRC_DIR)$(TO_DIR)%.c | $(FLAG_FLAG) $(TO_OBJ_FLAG)
									$(call compile)

$(OBJ_DIR)$(LST_OBJ_DIR)%.o:		$(SRC_DIR)$(LST_DIR)%.c | $(FLAG_FLAG) $(LST_OBJ_FLAG)
									$(call compile_bonus)

$(OBJ_DIR)$(GNL_OBJ_DIR)%.o:		$(SRC_DIR)$(GNL_DIR)%.c | $(FLAG_FLAG) $(GNL_OBJ_FLAG)
									$(call compile_extend)

$(OBJ_DIR)$(FT_PRINTF_OBJ_DIR)%.o:	$(SRC_DIR)$(FT_PRINTF_DIR)%.c | $(FLAG_FLAG) $(FT_PRINTF_OBJ_FLAG)
									$(call compile_extend)

$(OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)

$(IS_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(IS_OBJ_DIR)

$(MEM_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(MEM_OBJ_DIR)

$(PUT_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(PUT_OBJ_DIR)

$(STR_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(STR_OBJ_DIR)

$(TO_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(TO_OBJ_DIR)

$(LST_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(LST_OBJ_DIR)

$(GNL_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(GNL_OBJ_DIR)

$(FT_PRINTF_OBJ_FLAG):
									@mkdir -p $(OBJ_DIR)$(FT_PRINTF_OBJ_DIR)

OBJS_LEN						=	$(words $(OBJS))
BONUS_OBJS_LEN					=	$(words $(BONUS_OBJS))
EXTEND_OBJS_LEN					=	$(words $(EXTEND_OBJS))
COMPILED_OBJS_LEN				=	0
COMPILED_BONUS_OBJS_LEN			=	0
COMPILED_EXTEND_OBJS_LEN		=	0

PROGRESS_BAR_LENGTH				=	40

define compile
	$(eval COMPILED_OBJS_LEN=$(shell echo $$(($(COMPILED_OBJS_LEN)+1))))
	@$(call update_progress,$(COMPILED_OBJS_LEN),$(OBJS_LEN), "Libft\ Compiling")
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
endef

define compile_bonus
	$(eval COMPILED_BONUS_OBJS_LEN=$(shell echo $$(($(COMPILED_BONUS_OBJS_LEN)+1))))
	@$(call update_progress,$(COMPILED_BONUS_OBJS_LEN),$(BONUS_OBJS_LEN), "Libft\ bonus\ Compiling")
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
endef

define compile_extend
	$(eval COMPILED_EXTEND_OBJS_LEN=$(shell echo $$(($(COMPILED_EXTEND_OBJS_LEN)+1))))
	@$(call update_progress,$(COMPILED_EXTEND_OBJS_LEN),$(EXTEND_OBJS_LEN), "Libft\ extend\ Compiling")
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
endef

define update_progress
	$(eval BAR_LENGTH=$(shell echo "scale=0; $(PROGRESS_BAR_LENGTH) *$1 / $2" | bc))
	$(eval REMAINING_LENGTH=$(shell echo "$(PROGRESS_BAR_LENGTH) - $(BAR_LENGTH)" | bc))
	$(eval PERCENT=$(shell echo "scale=2; 100 * $1 / $2" | bc))
	@printf "\033[?25l" # Hide cursor
	@printf "\r" # Move cursor to the beginning of the line
	@printf "$(DEF_COLOR)$3\r\033[40C|$(DEF_COLOR)"
	@i=0; \
	while [ $$i -lt $(BAR_LENGTH) ]; do \
		printf "\033[42m%0.s $(DEF_COLOR)" $$i; \
		i=$$(($$i+1)); \
	done # Progress bar
	@i=0; \
	while [ $$i -lt $(REMAINING_LENGTH) ]; do \
		printf "\033[0m%0.s $(DEF_COLOR)" $$i; \
		i=$$(($$i+1)); \
	done # Remaining bar
	@printf "$(DEF_COLOR)| $(PERCENT)%%$(DEF_COLOR)"
endef

all:								$(NAME)
									@ranlib $(NAME)
									@printf "\r"
									@printf " Libft Compiled!       \n"
									@printf "\033[?25h" # Show cursor

$(NAME):							$(OBJS)
									@$(AR) $(NAME) $(OBJS)

bonus:								all $(BONUS_OBJS)
									@$(AR) $(NAME) $(BONUS_OBJS)
									@ranlib $(NAME)
									@printf "\r"
									@printf " Libft bonus Compiled! \n"
									@printf "\033[?25h" # Show cursor

extend:								bonus $(EXTEND_OBJS)
									@$(AR) $(NAME) $(EXTEND_OBJS)
									@ranlib $(NAME)
									@printf "\r"
									@printf " Libft extend Compiled!\n"
									@printf "\033[?25h" # Show cursor

clean:
									@$(RM) -r $(OBJ_DIR)
									@echo "$(BLUE)Libft objects files Cleaned!$(DEF_COLOR)"

fclean:								clean
									@$(RM) $(NAME)
									@echo "$(CYAN)Libft executable files Cleaned!$(DEF_COLOR)"

re:									fclean all
									@echo "$(GREEN)Cleaned and Rebuilt everything for Libft!$(DEF_COLOR)"

norm:
									@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY: all bonus extend clean fclean re norm
