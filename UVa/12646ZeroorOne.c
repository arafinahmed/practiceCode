#include<stdio.h>
int main ()
{
    int a, b, c, n;


    while(scanf("%d %d %d", &a, &b, &c)!=EOF)
    {

        if ((a>=0 && a<=1) && (b>=0 && b<=1) && (c>=0 && c<=1) )
        {

            if(a==b && a!=c)
            {
                printf("C\n");
            }
            else if(a==c && a!=b)
            {
                printf("B\n");
            }
            else if(c==b && c!=a)
            {
                printf("A\n");
            }
            else
                printf("*\n");
        }
    }


    return 0;
}
