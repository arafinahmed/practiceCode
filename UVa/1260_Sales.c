#include<stdio.h>
int main()
{
    int x,t,n, s[1500], i, c, j;
    scanf("%d", &t);
    for(x=1; x<=t; x++)
    {
        c=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &s[i]);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=i; j>=0; j--)
            {
                if(s[i+1]>=s[j])
                    c++;
            }
        }
        printf("%d\n", c);
    }

    return 0;
}
