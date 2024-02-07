#include <unistd.h>

void rvstr(char *s)
{
    int i = 0;
    int flag = 0;
    int start;
    int end;

   while(s[i])
       i++;
   while(i >= 0)
   {
       while(s[i] == ' ' || s[i] == '\t' || s[i] == '\0')
           i--;
      end = i;
     while(s[i] && s[i] != ' ' && s[i] != '\t')
        i--;
     start = i + 1;
     flag = start;
     while(start <= end)
     {
         write(1, &s[start],1);
         start++;
     }
     if(flag)
     {
         write(1 , " ",1);
     }
   }
}

int main(int ac, char **av)
{
    if(ac == 2)
        rvstr(av[1]);
    write(1,"\n",1);
}
