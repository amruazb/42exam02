#include <unistd.h>

void	rstr(char *s)
{
	while(*s)
	{
		if(*s && *s >= 'a' && *s <= 'z')
		{
			if(*(s + 1) == ' ' || *(s + 1) == '\0')
				*s -= 32;
		}
		else if (*s && *s >= 'A' && *s <= 'Z' && *(s + 1) != ' ' && *(s + 1) != '\0')
			*s += 32;
		write(1, s++,1);
	}
}

int main(int ac, char **av)
{
	int i = 1;
	while(ac > i)
	{
		rstr(av[i]);
		write(1, "\n",1);
		i++;
	}
	if(ac == 1)
		write(1, "\n",1);
}

