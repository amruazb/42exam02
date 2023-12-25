#include <stdlib.h>
#include <stdio.h>


int *ft_range(int start, int end)
{
	int size;
	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	int *result = malloc(size * sizeof(int));
	if(!result)
		return NULL;
	int *current = result;
	int step;
	if (start <= end)
		step = 1;
	else
		step = -1;
	int i = 0;
	while(i < size)
	{
		*current = start + i * step;
		current++;
		i++;
	}
	return result;
}

/*int main(int ac, char **av)
{
	(void)ac;
	int arrlen;
	int *arr;

	arrlen = abs(atoi(av[2]) - atoi(av[1]));
	arr = ft_range(atoi(av[1]), atoi(av[2]));
	int i = 0;
	while(i <= arrlen)
		printf("%d\n", arr[i++]);
	free(arr);
}*/


