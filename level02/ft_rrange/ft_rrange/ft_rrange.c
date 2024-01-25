#include <stdlib.h>

int	*ft_rrange(int start, int end)
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
			ar[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while(end <= start)
		{
			ar[i] = end;
			end++;
			i++;
		}
	}
	return ar;
}

