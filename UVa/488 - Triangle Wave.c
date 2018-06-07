#include<stdio.h>
int wave(int n)
{
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
int main()
{
    int t, n, f, k, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &n, &f);
        for(k=1; k<=f; k++)
        {
            wave(n);
            if(k<f)
            {
                printf("\n");
            }
        }
        if(i<t)
            {
                printf("\n");
            }
    }

    return 0;
}
