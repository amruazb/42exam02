#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i; 
	int 		max;
	i = 0;
	max = tab[0];
	while(i < len)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return max;
}

