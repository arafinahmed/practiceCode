#include <stdio.h>
int main()
{
    int a, b, c, n, i;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b)
        {
            if(b>c)
            {
                printf("Case %d: %d\n", i,b);
            }
            else
            {
                if(a>c)
                {
                    printf("Case %d: %d\n", i,c);
                }
                else
                {
                    printf("Case %d: %d\n", i,a);
                }
            }
        }
        else
        {
            if(a>c)
            {
                printf("Case %d: %d\n", i,a);
            }
            else
            {
                if(b>c)
                {
                    printf("Case %d: %d\n", i,c);
                }
                else
                {
                    printf("Case %d: %d\n", i,b);
                }
            }
        }
    }

    return 0;
}
