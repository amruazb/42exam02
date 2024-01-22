#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char *current;
	char **split = malloc(1024);
	int i = 0;
	while(*str && *str == ' ')
		str++;
	while(*str)
	{
		split[i] = malloc(1024);
		current = split[i];
		while(*str != ' ' && *str != '\n' && *str)
			*current++ = *str++;
		while(*str == ' ' || *str == '\n')
			str += 1;
		*current = '\0';
		i++;
	}
	split[i] = NULL;
	return split;
}

int main()
{
	char **split = ft_split(" aamir zuhail basehrre ");
	while(*split)
	{
		printf("%s\n", *split++);
	}
	free(*split);
}
