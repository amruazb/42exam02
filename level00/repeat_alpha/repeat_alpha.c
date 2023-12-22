#include <unistd.h>

void repeatalpha(char *str)
{
	while(*str)
	{
		int i = 1;
		if (*str >= 'A' && *str <= 'Z')
			i = *str - 'A' + 1;
		else if (*str >= 'a' && *str <= 'z')
			i = *str - 'a' + 1;
		while(i)
		{
			write(1, str, 1);
			i--;
		}
		i = 1;
		str++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		repeatalpha(av[1]);
	write(1, "\n", 1);
}

