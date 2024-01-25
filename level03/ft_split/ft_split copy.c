#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	int i = 0;
	int i2 = 0;
	int i3;
	char **split = malloc(1024);
	while(str[i] == 32 )
		i++;
	while(str[i])
	{
		if(str[i] > 32)
		{
			i3 = 0;
			split[i2] = malloc(1024);
			while(str[i] > 32)
			{
				split[i2][i3] = str[i];
				i++;
				i3++;
			}
			split[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	split[i2] = 0;
	return split;
}
