#include <stdio.h>
int main()
{
    int t, l, i, member[11], j;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d", &l);

        for(i=0; i<l; i++)
        {
            scanf("%d", &member[i]);
        }
        l = l/2;
        printf("Case %d: %d\n",j, member[l]);
    }
    return 0;
}
