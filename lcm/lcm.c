#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	unsigned int n = b;
	if( a > b)
		n = a;
	while (n % a != 0 || n % b != 0)
		++n;
	return (n);
}


