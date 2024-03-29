#include <stdio.h>
#include <stdlib.h>
int nc(int num)
{
	int c = 0;
	if (num == 0)
		return 1;
	if (num < 0)
	{
		c++;
		num *= -1;
	}
	while(num != 0)
	{
		num = num / 10;
		c++;
	}
	return c;
}


char	*ft_itoa(int nbr)
{
	char *res;
	int len = nc(nbr);
	res = malloc(len + 1);
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

/*int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}*/


