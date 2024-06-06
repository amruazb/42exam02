#include <unistd.h>

void	putstr(char *c)
{
	while(*c)
		write(1, c++,1);
}

void	putnbr(int num)
{
	if(num > 9)
		putnbr(num / 10);
	write(1, &(int){'0' + num % 10},1);
}

int main(int ac, char **av)
{
	(void)av;
	putnbr(ac - 1);
	putstr("\n");
}



		
