#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epur_str(char *str)
{
	while(*str == ' ' || *str == '\t')
		str++;
	while(*str && *str != ' ' && *str != '\t')
	{
		ft_putchar(*str);
		str++;
	}
	while(*str == ' ' || *str == '\t')
		str++;
	if (*str)
	{
		ft_putchar(' ');
		epur_str(str);
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		epur_str(av[1]);
	ft_putchar('\n');
}

