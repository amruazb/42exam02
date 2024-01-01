#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int num)
{
	int n = num;
	int count = 1;
	while(n /= 10)
		count++;
	if(n < 0)
		count++;
	char *s = malloc(count + 1);
	if(!s)
		return NULL;
	s[count] = '\0';
	if(num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	int i = count;
	while(i >= (s[0] == '-'))
	{
		s[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	return s;
}

int main()
{
	printf("%s\n", ft_itoa(-1234));
}

