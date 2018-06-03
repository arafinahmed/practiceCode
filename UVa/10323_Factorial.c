#include <stdio.h>
int main()
{
    int i, n;
    double fac;
    while(scanf("%d", &n)!=EOF)
    {
        fac =1;
        if(n>13)
            printf("Overflow!\n");
        else if (n<8 && n>=0)
            printf("Underflow!\n");
        else if(n<0)
        {
            n = (-1)*n;
            if(n%2==0)
                printf("Underflow!\n");

            else
                printf("Overflow!\n");
        }
        else
        {
            for(i=1; i<= n; i++)
            {
                fac= fac*i;
            }

            printf("%0.0lf\n", fac);
        }
    }


    return 0;
}
