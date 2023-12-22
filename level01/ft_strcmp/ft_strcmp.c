#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 && (*s1 == *s2))
	{
		s1++;
	       	s2++;
	}
	return (*s1 - *s2);
}

/*int main()
{
	char *s1 = "aamir";
	char *s2 = "zuhail";
	printf("%d\n",ft_strcmp(s1,s2));
}*/


		
