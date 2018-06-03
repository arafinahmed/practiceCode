#include <stdio.h>
int main()
{
    int t, n, k,x, i, j, sum, sum2;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        sum =0, sum2=0;
        scanf("%d %d %d",&n, &k, &x);
        for(i=1; i<=n; i++)
        {
            sum = sum + i;
        }
        for(i=x; i<x+k; i++)
        {
            sum2 = sum2 + i;
        }
        printf("Case %d: %d\n",j, sum - sum2);
    }

    return 0;
}
