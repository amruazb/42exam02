#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	char ascii[256] = {0};
	while (*s1)
	{
		if(!ascii[*s1])
		{
			write(1, s1, 1);
			ascii[*s1] = 1;
		}
		s1++;
	}
	while (*s2)
	{
		if(!ascii[*s2])
		{
			write(1, s2, 1);
			ascii[*s2] = 1;
		}
		s2++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}

#include <unistd.h>

void ft_union(char *s1, char *s2)
{
    // ascii array to keep track of characters
    char ascii[256] = {0};

    // Iterate through the first string
    while (*s1)
    {
        // Check if the character has not been encountered before
        if (!ascii[(unsigned char)*s1])
        {
            // Print the character
            write(1, s1, 1);

            // Mark the character as encountered
            ascii[(unsigned char)*s1] = 1;
        }

        // Move to the next character in the first string
        s1++;
    }

    // Iterate through the second string
    while (*s2)
    {
        // Check if the character has not been encountered before
        if (!ascii[(unsigned char)*s2])
        {
            // Print the character
            write(1, s2, 1);

            // Mark the character as encountered
            ascii[(unsigned char)*s2] = 1;
        }

        // Move to the next character in the second string
        s2++;
    }
}

// Main function to handle command line arguments
int main(int ac, char **av)
{
    // Check if there are exactly two command line arguments
    if (ac == 3)
        ft_union(av[1], av[2]);  // Call ft_union with the two input strings

    // Print a newline character
    write(1, "\n", 1);
}

