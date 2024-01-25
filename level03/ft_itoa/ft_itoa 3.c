#include <stdlib.h>
#include <stdio.h>

int count(int n)
{
	int i = 0;
	if(n <= 0)
		i = 1;
	while(n)
	{
		i++;
		n /= 10;
	}
	return i;
}

char *ft_itoa(int n)
{
	int i = 0;
	unsigned int pnum = n;
	int len = count(n);

	char *str = malloc(len + 1);
	str[len] = '\0';
	if(n==0)
		str[0] = '0';
	else if(n < 0)
	{
		str[0] = '-';
		pnum = -n;
	}
	while(pnum)
	{
		str[--len] = pnum % 10 + '0';
		pnum /= 10;
	}
	return str;
}

int main()
{
	printf("%s",ft_itoa(-12321));
}



