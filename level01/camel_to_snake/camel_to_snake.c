#include <unistd.h>
#include <stdlib.h>

void camel_to_snake(char *str)
{
	while(*str)
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str += ('a' - 'A');
		}
		write(1,str++, 1);
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		camel_to_snake(av[1]);
	write(1, "\n", 1);
}

