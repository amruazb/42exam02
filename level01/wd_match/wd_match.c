#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    char *p1 = s1;
    while(*s2 && *s1)
    {
        if(*s1 == *s2)
            s1++;
        s2++;
    }
    if(!*s1)
        while(*p1)
            write(1,p1++,1);
}

int main(int ac,char **av)
{
    if(ac == 3)
        wdmatch(av[1],av[2]);
    write(1, "\n",1);
}}


