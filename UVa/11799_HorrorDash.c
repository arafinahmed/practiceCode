#include <stdio.h>
int main()
{
    int i, t, n, max, j;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        max = 0;
        scanf("%d", &n);
        int sp[n];
        for(j=0;j<n; j++)
        {
            scanf("%d", &sp[j]);
            if(max<sp[j]) max = sp[j];
        }
        printf("Case %d: %d\n",i,  max);
    }
    return 0;
}
