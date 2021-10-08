
C		= gcc

CFLAGS	= -Wall -Wextra -Werror

SOURCES	= *.c

NAME	= libft

OBJS	= $(SOURCES:.c=.o)

.c.o:	
		$(C) $(CFLAGS) -c $< -o ${<:.c=.o}

all:	$(OBJS)
		$(C) $(CFLAGS) -o $(NAME) $(OBJS)

clean:	
		rm -rf ${OBJS}

fclean:	clean
		rm -rf $(NAME)

.PHONY:	all clean fclean