#include <stdio.h>
#include <stdlib.h>

int pgcd(int a , int b)
{
	while(b)
	{	int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}


int main(int ac, char **av)
{
	if(ac == 3)
	{
		int num = atoi(av[1]);
		int num2 = atoi(av[2]);
		printf("%d\n", pgcd(num, num2));
	}
	else if(ac != 3)
		printf("\n");
}

