#include <unistd.h>
 
void	last_word(char *s)
{
	while(*s)
		s++;
	s--;
	while(*s && (*s == ' '))
		s--;
	while(*s && (*s != ' '))
		s--;
	s++;
	while(*s && (*s != ' '))
		write(1, s++, 1);
}
int main(int ac, char **av)
{
	if(ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}

