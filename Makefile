NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99 -g -I./inc

SRCS_DIR = srcs
BONUS_DIR = bonus
BINDIR = bin

SRCS = $(wildcard $(SRCS_DIR)/*.c)
BONUS_SRCS = $(wildcard $(BONUS_DIR)/*.c)

OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(BINDIR)/%.o)
BONUS_OBJS = $(BONUS_SRCS:$(BONUS_DIR)/%.c=$(BINDIR)/bonus/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo $(GREEN)"Building $(NAME)"$(DEFAULT)

bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo $(GREEN)"Building $(NAME) with bonus"$(DEFAULT)

$(BINDIR):
	@mkdir -p $(BINDIR)
	@mkdir -p $(BINDIR)/bonus

$(BINDIR)/%.o: $(SRCS_DIR)/%.c | $(BINDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(BINDIR)/bonus/%.o: $(BONUS_DIR)/%.c | $(BINDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(BINDIR)
	@echo $(RED)"Cleaning object files"$(DEFAULT)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"Cleaning $(NAME)"$(DEFAULT)

re: fclean all bonus
	@echo $(GREEN)"Rebuilding everything"$(DEFAULT)

.PHONY: all bonus clean fclean re

DEFAULT = "\033[39m"
GREEN = "\033[32m"
RED = "\033[31m"