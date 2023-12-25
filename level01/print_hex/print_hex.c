#include <unistd.h>
#include <stdlib.h>


void print_hex(int num)
{
	if(num < 0)
		return ;
	if(num >= 16)
		print_hex(num / 16);
	write(1, &"0123456789abcdef"[num % 16], 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int num = atoi(av[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
}
