#include <unistd.h>

void	snaketocamel(char *str)
{
	while(*str)
	{
		if(*str == '_')
		{
			str++;
			*str -= 32;
		}
		write(1, str++, 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		snaketocamel(av[1]);
	write(1, "\n", 1);
}

