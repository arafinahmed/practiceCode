#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, t, i;
    scanf("%d", &t);
    double dif, min, max;
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        dif = sqrt(x*x + y*y);
        min = z - dif;
        max = 2*z - min;
        printf("%.2lf %.2lf\n", min, max );
    }
    return 0;
}
