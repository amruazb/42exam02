#include <unistd.h>

void	lastword(char *s)
{
	while(*s)
		s++;
	s--;
	while(*s  && (*s == ' ' || *s == '\t'))
		s--;
	while(*s && (*s != ' ' && *s != '\t'))
		s--;
	s++;
	while(*s && *s != ' ' && *s != '\t')
		write(1, s++, 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
		lastword(av[1]);
	write(1, "\n", 1);
}


