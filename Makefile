SRCS	=  ft_calc_len.c  ft_libft.c   ft_printf.c    \
			ft_put_base.c ft_putptr.c  ft_type1.c ft_type2.c 

OBJS	= ${SRCS:.c=.o}


NAME	= libftprintf.a

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

%.o: %.c
	$(CC) -c $(CFLAGS) -g $< -o $@

${NAME}: ${OBJS}
		ar -rcs ${NAME} ${OBJS}	 

# $(NAME): $(OBJS)
# 		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	@$(MAKE) 
	${RM} $(OBJS)

fclean: clean
	@$(MAKE)
	${RM} $(NAME) $(OBJS)

re:			fclean all

			ar -rcs ${NAME}  ${OBJS}

.PHONY:		all clean fclean re 
