#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int *ar = malloc(16384);
	if(start == end)
	{
		ar[0] = end;
		return ar;
	}
	else if(start < end)
	{
		while(start <= end)
		{
			ar[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while(end <= start)
		{
			ar[i] = start;
			start--;
			i++;
		}
	}
	return ar;
}

