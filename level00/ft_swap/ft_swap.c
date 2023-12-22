#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
		*a = *b;
		*b = temp;
}

/*int main()
{
	int a,b;
	a = 12;
	b = 21;
	ft_swap(&a,&b);
	printf("%d %d\n",a,b);
}*/

