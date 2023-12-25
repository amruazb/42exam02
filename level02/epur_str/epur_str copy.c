#include <unistd.h>

void epur_str(char *str)
{
	while(*str == ' ' || *str == '\t')
		str++;
	while(*str && *str != ' ' && *str != '\t')
		write(1, str++, 1);
	while(*str == ' ' || *str == '\t')
		str++;
	if(*str)
	{
		write(1, " ", 1);
		epur_str(str);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
}

	
