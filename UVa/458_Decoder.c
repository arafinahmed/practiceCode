#include<stdio.h>
int main()
{
    char x[10000];
    int i;
    while(gets(x))
    {
        for(i=0; x[i]!='\0'; i++)
        {
            x[i]= x[i]-7;
        }
        puts(x);
    }
    return 0;
}
