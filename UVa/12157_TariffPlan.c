#include <stdio.h>
int main()
{
    int n, dr[20], i, c1[20], c2[20], sum1, sum2,q, m;
    scanf("%d", &q);
    for(m=1; m<=q; m++)
    {
        sum1=0;
        sum2=0;

        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &dr[i]);
        }
        for(i=0; i<n; i++)
        {
            c1[i]=dr[i]/30;
            c1[i] = c1[i] + 1;
            c2[i]=dr[i]/60;
            c2[i] = c2[i] + 1;
            sum1 = sum1 + c1[i] * 10;
            sum2 = sum2 + c2[i] * 15;
        }
        if(sum1<sum2)
            printf("Case %d: Mile %d\n",m, sum1);
        else if(sum1>sum2)
            printf("Case %d: Juice %d\n",m, sum2);
        else
            printf("Case %d: Mile Juice %d\n", m,  sum1);
    }
    return 0;
}
