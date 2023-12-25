#include <stdio.h>
#include <stdlib.h>


int *ft_rrange(int start, int end)
{
	int size;

	if (start >= end)
		size = start - end + 1;
	else
		size = end - start + 1;

	int *result = malloc(size * sizeof(int));
	if(!result)
		return NULL;

	int i = 0;
	while (start != end)
	{
		result[i] = end;
		i++;
		{
			if(start < end)
				end -= 1;
			else
				end += 1;
		}
	}
	result[i] = end;
	return result;
}

/*int main()
{
	int *array = ft_rrange(1, 5);

	int i = 0;
	while(i < 5)
		printf("%d ", array[i++]);
	free(array);
}*/





			
