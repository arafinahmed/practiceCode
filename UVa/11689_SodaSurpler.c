#include<stdio.h>
int main()
{
    int e, f, c, d, i,t,m, sum;
    scanf("%d", &t);
    for(m=1; m<=t; m++)
    {
        sum =0;
        scanf("%d %d %d", &e,&f,&c);
        d = e+f;
        while(d>=c)
        {
            i = d%c;
            d = d/c;
            sum = sum + d;
            d = d+i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
