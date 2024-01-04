#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void rostring(char *str)
{
	while (is_space(*str))
		str++;
	if(*str && !is_space(*str))
		write(1, str++, 1);
	while(*str)
	{
		if (is_space(*str))
		{
			++str;
			continue;
		}
		if(is_space(*(str - 1)))
			write(1, " ", 1);
		write(1, str, 1);
		str++;
	}
}

int main(int ac,char **av)
{
	if(ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
}

