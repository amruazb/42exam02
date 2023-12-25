#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	int n = nbr;
	int countdigits = 1;
	
	while(n /= 10)
		countdigits++;
	if(nbr < 0)
		countdigits++;
	char *result = malloc((countdigits + 1) * sizeof(char));
	if(!result)
		return NULL;
	result[countdigits] = '\0';
	if(nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	int i = countdigits - 1;
	if(result[0] == '-')
		i--;
	while(i >= 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return result;
}


/*int main()
{
	char *s = ft_itoa(123456);
	printf("%s\n", s);
}*/


