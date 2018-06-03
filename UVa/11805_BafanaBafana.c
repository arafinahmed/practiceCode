#include <stdio.h>
int main()
{
    int t, i, n, k, p;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &n, &k, &p);
        p = p+k;
        p = p%n;
        if(p==0) printf("Case %d: %d\n",i, n);
        else printf("Case %d: %d\n", i, p);
    }
    return 0;
}
