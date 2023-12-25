#include <stdio.h>
#include <stdlib.h>

void	print_prime_factors(int num)
{
	if (num <= 1)
		return;
	int divisor = 2;

	while (num > 1)
	{
		if (num % divisor == 0)
		{
			printf("%d", divisor);
			num /= divisor;
			if (num > 1)
			{
				printf("*");
			}
		}
		else
		{
			divisor++;
		}
	}
}

int main(int ac, char **av)
{
	if(ac != 2)
	{
		printf("\n");
		return 0;
	}
	int num = atoi(av[1]);
	print_prime_factors(num);
	printf("\n");
}


