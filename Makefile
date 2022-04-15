SRCS = main.c get_next_line_utils.c get_next_line.c get_next_line.h
SRCS_printf = ../printf_ltromber/ft_printf.c ../printf_ltromber/ft_print_c.c ../printf_ltromber/ft_print_d.c ../printf_ltromber/ft_print_x.c ../printf_ltromber/ft_print_xmaj.c ../printf_ltromber/ft_print_u.c ../printf_ltromber/ft_print_s.c ../printf_ltromber/ft_print_p.c ../printf_ltromber/ft_itoa_unsigned.c
SRCS_libft = ../libft_ltromber/libft/ft_isalpha.c ../libft_ltromber/libft/ft_isdigit.c ../libft_ltromber/libft/ft_isalnum.c ../libft_ltromber/libft/ft_isascii.c ../libft_ltromber/libft/ft_isprint.c ../libft_ltromber/libft/ft_strlen.c ../libft_ltromber/libft/ft_memset.c ../libft_ltromber/libft/ft_bzero.c ../libft_ltromber/libft/ft_memcpy.c ../libft_ltromber/libft/ft_memcmp.c ../libft_ltromber/libft/ft_memmove.c ../libft_ltromber/libft/ft_toupper.c ../libft_ltromber/libft/ft_tolower.c ../libft_ltromber/libft/ft_strncmp.c ../libft_ltromber/libft/ft_memchr.c ../libft_ltromber/libft/ft_strchr.c ../libft_ltromber/libft/ft_strrchr.c ../libft_ltromber/libft/ft_strnstr.c ../libft_ltromber/libft/ft_strlcpy.c ../libft_ltromber/libft/ft_strlcat.c ../libft_ltromber/libft/ft_atoi.c ../libft_ltromber/libft/ft_calloc.c ../libft_ltromber/libft/ft_strdup.c ../libft_ltromber/libft/ft_substr.c ../libft_ltromber/libft/ft_strjoin.c ../libft_ltromber/libft/ft_putchar_fd.c ../libft_ltromber/libft/ft_strtrim.c ../libft_ltromber/libft/ft_putstr_fd.c ../libft_ltromber/libft/ft_putendl_fd.c ../libft_ltromber/libft/ft_putnbr_fd.c ../libft_ltromber/libft/ft_itoa.c ../libft_ltromber/libft/ft_split.c ../libft_ltromber/libft/ft_strmapi.c ../libft_ltromber/libft/ft_striteri.c ../libft_ltromber/libft/ft_lstnew.c ../libft_ltromber/libft/ft_lstadd_front.c ../libft_ltromber/libft/ft_lstsize.c ../libft_ltromber/libft/ft_lstlast.c
BONUS_SRCS = 

OBJS= ${SRCS:.c=.o}

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

#CFLAGS = -Wall -Werror -Wextra
NAME := getnextline.a

all: $(NAME)

bonus:	$(BONUS_OBJS)
		ar -rcs $(NAME) $(BONUS_OBJS)

.c.o:
	@echo Compiling $<
	gcc -c $(CFLAGS) $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@echo make $(NAME)
	ar -rcs $(NAME) $(OBJS)

re:	fclean $(NAME)
	all

clean:
	@echo Cleaning out those old .omake out
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@rm -f $(NAME)

out:
	gcc -g $(CFLAGS) $(SRCS) $(SRCS_printf) $(SRCS_libft)
	@./a.out

gnl:
	gcc -g get_next_line.c get_next_line_utils.c main.c get_next_line.h
	./a.out coucou

cleanout:
	rm a.out

.PHONY:        all clean fclean re

