#include <stdio.h>
int main()
{
    int c, f, t, i;
    scanf("%d", &t);
    for (i=1; i<=t; i++)
    {
        scanf("%d %d", &c, &f);
        double f1, c1;
        f1 = f/1.8;
        c1 = c + f1;
        printf("Case %d: %.2lf\n",i, c1);
    }
    return 0;
}
