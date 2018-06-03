#include <stdio.h>
int main()
{
    int i, n, pas, c=0;
    while(scanf("%d", &n)!=EOF)
    {
        c++;
        pas = 0;
        if(n==1)
            printf("Case %d: 0\n",c);

        else if(n==2)
            printf("Case %d: 1\n",c);
        else if(n<0)
            break;

        else
        {
            for(i=1; i<n; i*=2)
            {
                pas++;
            }
            printf("Case %d: %d\n",c, pas);
        }

    }
    return 0;
}
