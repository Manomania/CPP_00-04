########################################################################################################################
#                                                      VARIABLES                                                       #
########################################################################################################################

AUTHOR				:=  maximart
NAME				:=	ex00
HEADER				=	$(INC_DIR)
CC 					:=	c++
CFLAGS 				:=	-Wall -Wextra -Werror
CFLAGS				+=	-std=c++98
CFLAGS 				+=	-MMD -MP
AR					:=	ar rcs
RM					:=	rm -f

SRC_F				=	ClapTrap	\
						main
HDR_F				=	ClapTrap
SRC					=	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_F)))
OBJ 				=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_F)))
HDR					=	$(addprefix $(INC_DIR), $(addsuffix .hpp, $(HDR_F)))
DEP 				=	$(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_F)))

NPROCS				:=	$(shell nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 1)
UNAME_S				:=	$(shell uname -s 2>/dev/null || echo "Unknown")

########################################################################################################################
#                                                      DIRECTORY                                                       #
########################################################################################################################

SRC_DIR				:=	src/
OBJ_DIR				:=	obj/
INC_DIR				:=	include/

########################################################################################################################
#                                                       TARGETS                                                        #
########################################################################################################################

.print_header:
							$(call DISPLAY_TITLE)
							$(call SEPARATOR)
							$(call BUILD)
							$(call SEPARATOR)

all:					.print_header $(NAME)

clean:					.print_header
							@printf "%$(SPACEMENT)b%b" "$(BLUE)[$(OBJ_DIR)]:" "$(GREEN)[✓]$(DEF_COLOR)\n"
							@rm -rf $(OBJ_DIR)
							@printf "$(RED)=> Deleted!$(DEF_COLOR)\n"
							$(call SEPARATOR)

fclean: 				clean
							@printf "%$(SPACEMENT)b%b" "$(BLUE)[$(NAME)]:" "$(GREEN)[✓]$(DEF_COLOR)\n"
							@$(RM) $(NAME)
							@printf "$(RED)=> Deleted!$(DEF_COLOR)\n"
							$(call SEPARATOR)

re: 					.print_header fclean all

help:
							$(call DISPLAY_HELP)

info:
							$(call DISPLAY_INFO)

.PHONY: 				all clean fclean re help info

########################################################################################################################
#                                                       COMMANDS                                                       #
########################################################################################################################

$(NAME):				$(OBJ)
							@if [ ! -f "$(NAME)" ]; then \
								printf "$(BLUE)[$(NAME)]:$(DEF_COLOR)\n"; \
								printf "%-42b%b" "\r$(GREEN)Linking finished" "$(GREEN)[✓]$(DEF_COLOR)\n"; \
								printf "\n"; \
								echo "$(ORANGE)--------------------------------------------------------------------------$(DEF_COLOR)"; \
								printf "\n"; \
							fi
							@$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ_DIR)%.o: 			$(SRC_DIR)%.cpp $(INC_DIR)
							@mkdir -p $(dir $@)
							@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
							$(call PROGRESS_BAR_PERCENTAGE)
							$(if $(filter $(COMPILED_SRCS),$(SRCS_TO_COMPILE)),$(call SEPARATOR))

########################################################################################################################
#                                                       COLOURS                                                        #
########################################################################################################################

DEF_COLOR			:=	\033[0;39m
ORANGE				:=	\033[0;33m
GRAY				:=	\033[0;90m
RED					:=	\033[0;91m
GREEN				:=	\033[1;92m
YELLOW				:=	\033[1;93m
BLUE				:=	\033[0;94m
MAGENTA				:=	\033[0;95m
CYAN				:=	\033[0;96m
WHITE				:=	\033[0;97m
PURPLE				:=	\033[0;35m

########################################################################################################################
#                                                       DISPLAY                                                        #
########################################################################################################################

SPACEMENT			:=	-41
COMPILED_SRCS		:=	0
FRAMES				:=	⠋ ⠙ ⠹ ⠸ ⠼ ⠴ ⠦ ⠧ ⠇ ⠏
SLEEP_FRAME			:=	0.001

ifeq ($(MAKECMDGOALS),re)
	SRCS_TO_COMPILE := $(words $(SRC_F))
else
	SRCS_TO_COMPILE := $(shell \
		if [ -f "$(NAME)" ]; then \
			if [ "$(INC_DIR)" -nt "$(NAME)" ]; then \
				echo $(words $(SRC_F)); \
			else \
				modified_headers=$$(find $(INC_DIR) -name '*.h' -o -name '*.hpp' -newer "$(NAME)"); \
				all_affected_headers="$$modified_headers"; \
				search_headers="$$modified_headers"; \
				while [ -n "$$search_headers" ]; do \
					new_found=""; \
					for h in $$search_headers; do \
						h_name=$$(basename $$h); \
						includers=$$(grep -rl '#include *"'"$$h_name"'"' $(INC_DIR)); \
						new_found="$$new_found $$includers"; \
					done; \
					search_headers=$$(echo $$new_found | tr ' ' '\n' | sort -u | grep -v -x -F "$$(echo $$all_affected_headers | tr ' ' '\n')" ); \
					all_affected_headers="$$all_affected_headers $$search_headers"; \
				done; \
				all_affected_headers=$$(echo $$all_affected_headers | tr ' ' '\n' | sort -u); \
				affected_cpp=""; \
				for h in $$all_affected_headers; do \
					h_name=$$(basename $$h); \
					cpps=$$(grep -rl '#include *"'"$$h_name"'"' $(SRC_DIR)); \
					affected_cpp="$$affected_cpp $$cpps"; \
				done; \
				modified_cpp=$$(find $(SRC_DIR) -name '*.cpp' -newer "$(NAME)"); \
				all_cpp="$$modified_cpp $$affected_cpp"; \
				echo "$$(echo $$all_cpp | tr ' ' '\n' | sort -u | wc -l)"; \
			fi; \
		else \
			echo $(words $(SRC_F)); \
		fi)
endif

define PROGRESS_BAR_PERCENTAGE
						$(eval COMPILED_SRCS := $(shell expr $(COMPILED_SRCS) + 1))
						@if [ $(SRCS_TO_COMPILE) -gt 0 ]; then \
							if [ $(COMPILED_SRCS) -eq 1 ]; then \
								printf "$(BLUE)[$(NAME)]:$(DEF_COLOR)\n"; \
							fi; \
							percentage=$$(expr $(COMPILED_SRCS) \* 100 / $(SRCS_TO_COMPILE) 2>/dev/null || echo 0); \
							for frame in $(FRAMES); do \
								printf "\r$(YELLOW)%s Compiling... [%d/%d] %d%%$(DEF_COLOR)" "$$frame" $(COMPILED_SRCS) $(SRCS_TO_COMPILE) $$percentage; \
								sleep $(SLEEP_FRAME); \
							done; \
							if [ $(COMPILED_SRCS) -eq $(SRCS_TO_COMPILE) ]; then \
								printf "%-42b%b" "\r$(GREEN)Compilation finished [$(COMPILED_SRCS)/$(SRCS_TO_COMPILE)]" "$(GREEN)[✓]$(DEF_COLOR)\n"; \
							fi; \
						fi
endef

#TITLE ASCII ART - SLANT
define	DISPLAY_TITLE
						@echo "$(RED)			   __________  ____ "
						@echo "$(ORANGE)			  / ____/ __ \\/ __ \\"
						@echo "$(YELLOW)			 / /   / /_/ / /_/ /"
						@echo "$(GREEN)			/ /___/ ____/ ____/ "
						@echo "$(BLUE)			\\____/_/   /_/      "
						@printf "$(PURPLE)			                    $(DEF_COLOR)"
endef


define	SEPARATOR
						@printf "\n"
						@echo "$(ORANGE)--------------------------------------------------------------------------$(DEF_COLOR)";
						@printf "\n"
endef

define	BUILD
						@printf "%-47b%b" "$(GREEN)AUTHOR:$(DEF_COLOR)" "$(AUTHOR)\n";
						@printf "%-47b%b" "$(GREEN)NAME:$(DEF_COLOR)" "$(NAME)\n";
						@printf "%-47b%b" "$(GREEN)CC:$(DEF_COLOR)" "$(CC)\n";
						@printf "%-47b%b" "$(GREEN)FLAGS:$(DEF_COLOR)" "$(CFLAGS)\n";
endef

define DISPLAY_HELP
						$(call SEPARATOR)
						@printf "                              🚀 MAKEFILE HELP\n"
						$(call SEPARATOR)
						@printf "$(GREEN)Basic commands:$(DEF_COLOR)\n"
						@printf "%-33b%b" "make" "- Build in release mode\n"
						@printf "%-33b%b" "make clean" "- Remove object files\n"
						@printf "%-33b%b" "make fclean" "- Remove all generated files\n"
						@printf "%-33b%b" "make re" "- Clean and rebuild\n\n"
						@printf "$(GREEN)Advanced commands:$(DEF_COLOR)\n"
						@printf "%-33b%b" "make info" "- Show system info\n"
						$(call SEPARATOR)
endef

define PLURAL
$(if $(filter 1,$(1)),file,files)
endef

define DISPLAY_INFO
						$(call SEPARATOR)
						@printf "                              📋 SYSTEM INFO\n"
						$(call SEPARATOR)
						@printf "%-47b%b" "$(GREEN)System:$(DEF_COLOR)" "$(UNAME_S)\n"
						@printf "%-47b%b" "$(GREEN)Compiler:$(DEF_COLOR)" "$(CC) $(shell $(CC) --version 2>/dev/null | head -1 | cut -d' ' -f2- || print 'version unknown')\n"
						@printf "%-47b%b" "$(GREEN)CPU Cores:$(DEF_COLOR)" "$(NPROCS)\n"
						@printf "%-47b%b" "$(GREEN)Sources:$(DEF_COLOR)" "$(words $(SRC_F)) $(call PLURAL,$(words $(SRC_F)))\n"
						@printf "%-47b%b" "$(GREEN)Headers:$(DEF_COLOR)" "$(words $(HDR_F)) $(call PLURAL,$(words $(HDR_F)))\n"
						@printf "%-47b%b" "$(GREEN)Current Dir:$(DEF_COLOR)" "$(shell pwd)\n"
						@printf "%-47b%b" "$(GREEN)Makefile:$(DEF_COLOR)" "$(firstword $(MAKEFILE_LIST))\n"
						$(call SEPARATOR)
endef

-include $(DEP)