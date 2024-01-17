#include <stdlib.h>
#include <stdio.h>

int nc(int nbr)
{
	int c = 0;
	if (nbr == 0)
		return 1;
	if (nbr == -2147483638)
		return 11;
	if (nbr < 0)
	{
		c++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		c++;
		nbr /= 10;
	}
	return c;
}

char *ft_itoa(int nbr)
{
	char *res;
	int len;
	len = nc(nbr);
	res = malloc(sizeof(char) * (len + 1));

	res[len] = '\0';
	len--;
	if (nbr == -2147483648)
	{
		res = "-2147483648";
		return res;
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr > 9)
	{
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	res[len] = nbr + '0';
	return res;
}

int main()
{
	char *s =  ft_itoa(1121231234);
	printf("%s\n", s);
}

