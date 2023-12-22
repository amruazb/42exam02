#include <unistd.h>

void first(char *str)
{
	while(*str && (*str == ' ' || *str == '\t'))
			str++;
	while(*str && (*str != ' ' && *str != '\t'))
			write(1, str++, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		first(av[1]);
	}
	write(1, "\n", 1);
}

