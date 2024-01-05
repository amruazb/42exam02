#include <stdio.h>
#include <unistd.h>


void	searchandreplace(char *str, char f,char r)
{
	char *p = str;
	while(*p)
	{
		if (*p == f)
		{
			*p = r;
		}
		write(1, p, 1);
		p++;
	}
}

int main(int ac,char **av)
{
	if(ac != 4 || av[2][1] || av[3][1])
		write(1, "\n", 1);
	else
	{
		searchandreplace(av[1],av[2][0],av[3][0]);
		write(1, "\n", 1);
	}
}

