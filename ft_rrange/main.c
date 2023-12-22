#include <stdio.h>
#include <stdlib.h>

int sub(int n);
int *ft_rrange(int start, int end);

int main(int ac , char **av)
{
	if (ac != 3)
	{
		printf("usage: %s <start> <end> \n", av[0]);
		return 1;
	}

	int start = atoi(av[1]);
	int end = atoi(av[2]);
	int *arr = ft_rrange(start, end);

	int i = 0;
	while(i < 1 + sub(end - start))
	{
		printf("%d", arr[i]);
	if(i < 1 + sub(end - start) - 1)
		printf(", ");
		++i;
	}
	printf("\n");
	free(arr);
	return(0);
}

