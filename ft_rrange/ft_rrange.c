#include <stdio.h>
#include <stdlib.h>


int sub(int n)
{
	if(n < 0)
		return (-n);
	return(n);
}

int	*ft_rrange(int start, int end)
{
	int total_numbers;
	int *array;
	int step;
	int i;

	total_numbers = 1 + sub(start - end);
	array = malloc(sizeof(int) * total_numbers);

	if (start > end)
		step = 1;
	else
		step = 1;
	i = 0;
	while(i < total_numbers)
	{
		array[i] = end;
		end = end + step;
		++i;
	}
	return array;
}


