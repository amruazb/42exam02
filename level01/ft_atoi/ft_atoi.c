#include <stdio.h>
#include <stdlib.h>

int	 ft_atoi(const char *str)
{
	int num = 0;
	int negative = 1;
	while(*str == ' ' || *str == '\t')
		str++;
	if( *str == '-' || *str == '+')
	{
		if(*str == '-')
			negative = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		num = num * 10 + ( *str - '0');
		str++;
	}
	return num * negative;
}

/*int main()
{
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", atoi("-1234"));
}*/

