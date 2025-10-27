FILES_C = ft_strtrim.c
FILES_O = $(FILES_C:.c=.o)

libft.a: $(FILES_O)
	ar rcs $@ $^

all: make

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@ -I ./includes

re: fclean all

fclean: clean
	rm libft.a

clean:
	rm $(FILES_O)



 
