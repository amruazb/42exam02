#include <unistd.h>

void	search(char *s, char f, char r)
{
	while(*s)
	{
		if(*s == f)
			*s = r;
	write(1,s++, 1);
	}

}

int main(int ac, char **av)
{
	if(ac != 4 || av[2][1] || av[3][1])
	{
		return write(1, "\n", 1);;
	}
	else
		search(av[1], av[2][0], av[3][0]);
	write(1, "\n", 1);
}

