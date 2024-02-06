#include <unistd.h>

void    expand(char *s)
{
    while(*s && *s == ' ' || *s == '\t')
        s++;
    while(*s)
    {
        if(*s == ' ' || *s == '\t')
        {
            if(*(s + 1) > 32 && *s)
                write(1, "   ",3);
        }
        else if(*s != ' ' && *s != '\t')
            write(1, s,1);
        s++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        expand(av[1]);
    write(1, "\n",1);
}
