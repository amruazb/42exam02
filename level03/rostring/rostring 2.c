#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rostring(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *p = malloc(1024);
	while(*s && *s == ' ')
		s++;
	while(*s && *s != ' ')
		p[i++]= *(s)++;
	while(*s)
	{
		if(*s == ' ' || *s == '\t')
		{
			s++;
			if(*s != '\0' && *s != ' ')
			{
				if(j == 42)
					write(1, " ", 1);
				else 
					j = 42;
			}
		}	
		else
		{
			write(1, s++,1);
			k = 1;
		}
	}	
	i = 0;
	if(k == 1)
		write(1, " ", 1);
	while(*p)
		write(1, p++, 1);
}

int main(int ac, char **av)
{
	if(ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
}

