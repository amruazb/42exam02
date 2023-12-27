#include <unistd.h>

int is_prime(int n)
{
	if(n <= 1)
		return 0;
	int i = 2;
	while(i < n)
	{
		if(n % i == 0)
				return 0;
		i++;
	}
	return 1;
}

int add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	return sum;
}
int ft_atoi(char *s)
{
	int result = 0;
	while(*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return result;
}

void pn(int n)
{
	if (n >= 10)
		pn(n / 10);
	write(1, &(int){ '0' + n % 10}, 1);
}

int main(int ac, char **av)
{
	int i;
	if(ac == 2 && (i = add_prime_sum(ft_atoi(av[1]))))
		pn(i);
	else
		pn(0);
	write(1, "\n", 1);
}



