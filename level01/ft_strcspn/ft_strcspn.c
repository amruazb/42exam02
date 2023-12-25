#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t count = 0;
	while(*s)
	{
		const char *r = reject;
		while(*r)
		{
			if(*s == *r)
			{
				return count;
			}
			r++;
		}
		s++;
		count++;
	}
	return count;
}

/*int main()
{
	int result = ft_strcspn("Hello, world!", " ,!");
	printf("%d\n", result);
}*/


