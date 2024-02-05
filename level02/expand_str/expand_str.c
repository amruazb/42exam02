#include <unistd.h>

void	epur(char *s)
{
	int i = 0;
	int lastspace = 0;
	while(*s && *s == ' ')
		s++;
	while(*s)
	{
		if(*s && *s  ==  ' ')
		{
			while(*s && *s == ' ')
				s++;;
			s--;
			lastspace = 1;
		}
		else
		{
			if(lastspace)
			{
				write(1, "   ", 3);
				lastspace = 0;
			}
			write(1, s, 1);
		}
		s++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		epur(av[1]);
	write(1, "\n",1);
}
