#include <unistd.h>

void pn(int  n)
{
	if(n >= 10)
		pn(n / 10);
	write(1, &(char){'0' + n % 10}, 1);
}



int main()
{
	int i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0)
			write(1, "fizz", 4);
		if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i % 3)
			pn(i);
		i++;
		write(1, "\n", 1);
	}
}