#include <unistd.h>

void ulstr(char *str)
{
	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		write(1, str++, 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);

}

