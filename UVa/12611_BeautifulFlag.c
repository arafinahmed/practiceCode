#include <stdio.h>
int main()
{
    int r, x1, x2, y1,i, t;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &r);
        x1 = (45*r)/20;
        x2 = (55*r)/20;
        y1 = (30*r)/20;
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,-x1,y1,x2,y1,x2,-y1,-x1,-y1);

    }

    return 0;
}
