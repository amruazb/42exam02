#include <stdio.h>
#include <stdlib.h>

void	fprime(int num)
{
	int divisor = 2;
	if(num <= 1)
		return ;
	while(num >= 2)
	{
		if(num % divisor == 0)
		{
			printf("%d",divisor);
			num /= divisor;
			if(num > divisor)
				printf("*");
		}
		else
			divisor++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
