#include <unistd.h>
#include <stdlib.h>

void print_bits(unsigned char octet)
{
	int i = 7;
	while(i >= 0)
	{
		if(octet & ( 1 << i))
		{
				write(1, "1", 1);
		}
		else
		{
			write(1, "0", 1);
		}
		i--;
	}
}
/*int main(int ac, char **av)
{
	unsigned char octet;
	octet = atoi(av[1]);
	if (ac == 2)
		print_bits(octet);
	write(1, "\n", 1);
}*/



