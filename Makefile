M	        	= src/
OM              = obj/

NAME            = push_swap

CC              = gcc -g
CFLAGS          = -Wall -Werror -Wextra #-fsanitize=address

RM              = -rm -r

ifneq (,$(findstring xterm,${TERM}))
	GREEN        := $(shell tput -Txterm setaf 2)
	RESET := $(shell tput -Txterm sgr0)
else
	GREEN        := ""
	RESET        := ""
endif

MAIN_FILE           = push_swap
UTILS_FILES       	= ft_add_cero
UTILS_FILES2		= ft_atoi
UTILS_FILES3		= ft_big_int_size
UTILS_FILES4		= ft_check_args
UTILS_FILES5		= ft_check_duplicates
UTILS_FILES6		= ft_check_error
UTILS_FILES7		= ft_copy_stacks
UTILS_FILES8		= ft_enlist_binary
UTILS_FILES9		= ft_fill_mtrx
UTILS_FILES10		= ft_free
UTILS_FILES11		= ft_full_pa
UTILS_FILES12		= ft_itoa
UTILS_FILES13		= ft_memcpy
UTILS_FILES14		= ft_order_small3
UTILS_FILES15		= ft_order_small5
UTILS_FILES16		= ft_ordered
UTILS_FILES17		= ft_pb_ra
UTILS_FILES18		= ft_pb_small
UTILS_FILES19		= ft_pb
UTILS_FILES20		= ft_ra_small
UTILS_FILES21		= ft_ra
UTILS_FILES22		= ft_reorder_small
UTILS_FILES23		= ft_rra_small
UTILS_FILES24		= ft_split
UTILS_FILES25		= ft_to_positive


MANDATORY_OBJS  = $(addprefix $(OM), $(addsuffix .o, $(MAIN_FILE))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES2))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES3))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES4))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES5))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES6))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES7))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES8))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES9))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES10))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES11))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES12))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES13))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES14))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES15))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES16))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES17))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES18))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES19))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES20))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES21))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES22))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES23))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES24))) $(addprefix $(OM),$(addsuffix .o, $(UTILS_FILES25)))

MANDATORY_SRCS  = $(addprefix $(M), $(addsuffix .c, $(MAIN_FILE))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES2))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES3))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES4))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES5))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES6))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES7))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES8))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES9))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES10))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES11))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES12))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES13))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES14))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES15))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES16))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES17))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES18))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES19))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES20))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES21))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES22))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES23))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES24))) $(addprefix $(M),$(addsuffix .c, $(UTILS_FILES25)))

all: $(NAME)

$(OM):
	@echo "${GREEN}----------- CREATING FOLDERS --------------------${RESET}"
	mkdir $@

$(MANDATORY_OBJS): | $(OM)

$(MANDATORY_OBJS): $(OM)%.o: $M%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MANDATORY_OBJS)
	$(CC) $(CFLAGS) $^ -o $(NAME)


clean:
ifeq ($(shell test -e obj/push_swap.o && echo "0"), $(shell echo "0"))
	$(RM) $(MANDATORY_OBJS)
endif

fclean: clean
ifeq ($(shell test -e push_swap && echo "0"), $(shell echo "0"))
	$(RM) $(NAME) $(OM)
	@echo "${GREEN}----------- FOLDERS REMOVED CORRECTLY -----------${RESET}"
endif

re: fclean all

.PHONY: fclean clean mandatory bonus all