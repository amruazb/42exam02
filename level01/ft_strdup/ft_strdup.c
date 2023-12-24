#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


char *ft_strdup(char *src)
{
	int i = 0;
	while(src[i])
		i++;
	char *p = malloc(i + 1);
	if(!p)
		return NULL;
	i = 0;
	while(src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main()
{
	char *str = ft_strdup("aamir");
	printf("%s\n", str);
}*/

