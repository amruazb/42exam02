#include <unistd.h>

void alpha(char* str)
{
	while(*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = 'Z' - (*str - 'A');
		if(*str >= 'a' && *str <= 'z')
			*str = 'z' - (*str - 'a');
		write(1, str++, 1);
	}
}

int main(int ac, char *av[])
{
	if (ac == 2)
		alpha(av[1]);
	write(1, "\n", 1);
}

