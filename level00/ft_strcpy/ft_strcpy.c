#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *ps1 = s1;
	while((*s1++ = *s2++));
	return (ps1);
}

/*int main()
{
	char dst[100] = "Aamir";
	char src[100]  = "Zuhail";
	printf("%s\n", ft_strcpy(dst,src));
}*/


