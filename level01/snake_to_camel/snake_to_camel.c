#include <unistd.h>

void snakecamel(char *s)
{
	while(*s)
	{
		if(*s == '_')
		{
			s++;
			*s -= 32;
		}
		write(1,s++, 1);
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		snakecamel(av[1]);
	write(1, "\n", 1);
}

