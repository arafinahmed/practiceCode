#include <stdio.h>
#include <math.h>
int main()
{
    int i, t;
    scanf("%d", &t);
    double d, v, u, x, y, t3, t1, t2;
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf", &d, &v, &u);
        if(u>v && v>0)
        {
        x = acos(((-1)*v)/u);
        y = u* sin(x);
        t1 = d /y;
        t2 = d/u;
        t3 = t1 - t2;
        printf("Case %d: %.3lf\n",i, t3);
        }
        else
            printf("Case %d: can\'t determine\n", i);
    }
    return 0;
}
