#include <stdio.h>
int main()
{
    int n, k, i, s=0;
    while(scanf("%d %d", &n, &k)!=EOF)
    {
        if(k>1)
        {
        s=n;
        while(k<=n)
        {
            i = n%k;
            n = n/k;
            s = s+n;
            n=n+i;
        }
        printf("%d\n", s);
        }
        else
            printf("%d\n", n);
    }

    return 0;
}
