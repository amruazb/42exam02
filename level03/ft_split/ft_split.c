#include <stdlib.h>

char **ft_split(char *str)
{
    int i, j, k;
    char **split;
    char *current_word;

    i = 0;
    k = 0;

    // Dynamically allocate memory for the array of pointers based on max_words
    if (!(split = malloc(1024)))
        return (NULL);

    while (*str == ' ' || *str == '\t' || *str == '\n')
        str += 1;

    while (*str)
    {
        j = 0;

        // Dynamically allocate memory for each word
        if (!(split[k] = malloc(4096)))
            return (NULL);

        current_word = split[k];

        while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
            *(current_word + j++) = *(str++);

        while (*str == ' ' || *str == '\t' || *str == '\n')
            str += 1;

        *(current_word + j) = '\0';
        k += 1;
    }

    split[k] = NULL;
    return (split);
}
#include <stdio.h>


int main()
{
	char **split = ft_split(" aamir zuhail basheer");
	while(*split)
	{
		printf("%s\n", *split++);
	}
	free(*split);
}


