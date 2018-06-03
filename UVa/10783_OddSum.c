#include <stdio.h>
int main()
{
    int a,b,n, i,s;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        s = 0;
        scanf("%d %d", &a, &b);
        if(b>a)
        {
            if(a%2!=0)
            {
                for(a; a<=b; a=a+2)
                {
                    s=s+a;
                }
                    printf("Case %d: %d\n", i, s);

            }
            else
            {
                a=a+1;
                for(a; a<=b; a=a+2)
                {
                    s = s+ a;
                }
                    printf("Case %d: %d\n", i, s);
            }
        }
        else
        {
            if(b%2!=0)
            {
                for(b; b<=a; b=b+2)
                {
                    s=s+b;
                }
                    printf("Case %d: %d\n", i, s);

            }
            else
            {
                b=b+1;
                for(b; b<=a; b=b+2)
                {
                    s = s+ b;
                }
                    printf("Case %d: %d\n", i, s);
            }

        }
    }
    return 0;
}
