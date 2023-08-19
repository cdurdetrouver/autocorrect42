#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a + *b;
	// xd t'y as cru
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_strlen(char *str)
{
	// je vais pas te donner les reponses
	return (str ? 0 : 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	// pff
	return (s1 ? 0 : 1);
	return (s2 ? 0 : 1);
}