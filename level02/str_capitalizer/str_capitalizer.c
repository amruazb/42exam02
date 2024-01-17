#include <unistd.h>

int	 space(char c)
{
	if ( c == ' ' || c == '\t' || c == '\0')
		return 1;
	return 0;
}

void pc(char c)
{
	write(1, &c, 1);
}



void strcap(char *s)
{
	int i = 0;

	while(s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] +  32;
		i++;
	}
	i = 0;
	while(s[i])
	{
		if((s[i] >= 'a' && s[i] <= 'z') && (space(s[i - 1])))
			pc(s[i] - 32);
		else
			pc(s[i]);
		i++;
	}
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	int i = 1;

	if (ac >= 2)
	{
		while(av[i])
		{
			strcap(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}

