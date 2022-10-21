CC=GCC
FLAGS= -Wall -Werror -Wextra -I libft.h
AR=ar crs
RM=rm -rf

#colors
reset = \033[0m
sfr = \033[1;33m
7mr = \033[1;31m
zrq = \033[1;34m
khdr = \033[1;32m

SRCS=	ft_putchar ft_putnbr_u ft_printf ft_putnbr ft_putstr ft_putnbr_base\
		ft_putptr
OBJ=$(SRCS:=.o)
NAME=libftprintf.a

all: $(NAME)
	@echo "$(zrq)=======  libftprintf.a : TAAAABI3A RABI3A  =======$(reset)"

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libftprintf.h
	@echo  "$(7mr)" $< "$(khdr) : COMMPILED$(reset)"
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(sfr)====  MR.propre : ANA M3AKOM 7OROBAT  ====$(reset)"
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re