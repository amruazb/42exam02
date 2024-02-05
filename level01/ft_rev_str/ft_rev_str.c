#include <stdio.h>

char *rev_str(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;;

	while(s[i])
		i++;
	i--;;
	int mid = i / 2;
	while(mid >= 0)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		mid--;
		i--;
		j++;
	}
	return s;
}

int main()
{
	char s[] = "aamir";
	printf("%s\n",rev_str(s));
}


