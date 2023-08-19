norminette -R CheckForbiddenSourceHeader ft_is_negative.c
cc -Wall -Wextra -Werror ft_is_negative.c main.c -o output
./output
cat output.wait
