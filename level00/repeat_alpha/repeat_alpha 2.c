#include <unistd.h>

void repeat_alpha(char *s)
{
	int i = 0;
	while(*s)
	{
		if(*s >= 'a' && *s <= 'z')
			i = (*s - 'a') + 1;
		else if(*s >= 'A' && *s <= 'Z')
			i = (*s - 'A') + 1;
		else
			write(1, s, 1);
		while(i)
		{
			write(1, s, 1);
			i--;
		}
		s++;
	}
}

int main(int ac,char **av)
{
	if(ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
}

		
