#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *s)
{
	int i = 0;
	int j = 0;
	int k;
	char **split = malloc(1024);
	while(s[i] == 32)
		i++;
	while(s[i])
	{
		if(s[i] > 32)
		{
			k = 0;
			split[j] = malloc(1024);
			while(s[i] > 32)
			{
				split[j][k++] = s[i++];
			}
			split[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	split[j] = 0;
	return split;
}

int main()
{
	char **split = ft_split(" aamir zuail baasheer ");
	while(*split)
		printf("%s\n", *split++);
	free(*split);
}

