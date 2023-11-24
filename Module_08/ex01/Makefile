##### Colors ####
GREEN	= \033[0;32m
RED		= \033[0;31m
BLUE	= \033[0;34m
END		= \033[0m

##### Names #####
NAME	= container
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

_SRCS	=	main.cpp \
			Span.cpp
			
_HDRS	=	Span.hpp

OBJS	= $(_SRCS:.cpp=.o)
##### Makefile work ####

%.o: %.cpp $(_HDRS)
	@$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Baking $(NAME)..."
	@$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
	@echo "$(GREEN)OK!$(END)"
	@echo "$(BLUE)$(NAME) READY !$(END)"

clean:
	@echo "Removing objects..."
	@rm -rf $(OBJS)
	@echo "$(GREEN)Done!$(END)"

fclean: clean
	@echo "Cleaning everything..."
	@rm -f $(NAME)
	@echo "$(GREEN)Done!$(END)"
	@echo "$(BLUE)Everything is clean!$(END)"

re:    fclean all

.PHONY: all clean fclean re
