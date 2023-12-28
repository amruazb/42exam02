#include <unistd.h>

void wd_match(char *s1, char *s2)
{
	int i = 0;
	char *ps1 = s1;
	while(s1[i])
		i++;
	int j = 0;
	while (*s2 && j < i)
	{
		if(*s2 == ps1[j])
			j++;
		s2++;
	}
	if(j == i)
		write(1, ps1, i);
}
int main(int ac, char **av)
{
	if(ac == 3)
		wd_match(av[1], av[2]);
	write(1, "\n", 1);
}


