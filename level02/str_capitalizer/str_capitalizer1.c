#include <unistd.h>

void strcap(char *s) 
{
	int i = 0;
	if(s[i] >= 'a' && 'z' >= s[i])
		s[i] -= 32;
	write(1, &s[i],1);
	while(s[++i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1]) == ' ' || s[i - 1] == '\t')
			s[i] -= 32;
		write(1, &s[i],1);
	}
}

int main(int ac, char **av) 
{
    int i = 1;
	if(ac <= 1)
		write(1, "\n",1);
    while (i < ac) 
	{
        strcap(av[i]);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}

