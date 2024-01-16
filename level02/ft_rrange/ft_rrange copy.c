#include <stdlib.h>
#include <stdio.h>

int range(int start, int end)
{
	int c = 0;
	if (start < end)
	{
		while (start <= end)
		{
			c++;
			start++;
		}
	}
	else
	{
		while (end <= start)
		{
			end++;
			c++;
		}
	}
	return (c);
}

int	*ft_rrange(int start, int end)
{
	int r = range(start, end);
	int i = 0;
	int *ar = malloc(sizeof(int *) *(r));
	if (!ar)
		return NULL;
	while (i < r)
	{
		if (start < end)
		{
			ar[i] = end;
			i++;
			end--;
		}
		else
		{
			ar[i] = end;
			i++;
			end++;
		}
	}
	return ar;
}


