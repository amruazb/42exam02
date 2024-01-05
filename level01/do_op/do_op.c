#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int av1 = 0;
	int av2 = 0;
   if(ac == 4)
   {
	   av1 = atoi(av[1]);
	   av2 = atoi(av[3]);

	   if(av[2][0] == '+')
		   printf("%d", av1 + av2);
		if(av[2][0] == '-')
			printf("%d", av1 - av2);
		if (av[2][0] == '/')
			printf("%d", av1 / av2);
		if(av[2][0] == '%')
			printf("%d", av1 % av2);
		if(av[2][0] == '*')
			printf("%d", av1 * av2);
   }
   printf("\n");
}



			   
