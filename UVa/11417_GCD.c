#include <stdio.h>

int gcd(int a, int b);
int main()
{
    int n, i, j, G;

    while(scanf("%d", &n)!=EOF)
    {
        G = 0;
        if(n==0) break;
        else
        {

            for(i=1; i<n; i++)
            {
                for(j=i+1; j<=n; j++)
                {
                    G+= gcd(i,j);
                }
            }
            printf("%d\n", G);
        }

    }
    return 0;
}

int gcd(int a, int b)
{
    int c, temp;
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    c = a;
    while((a%c != 0) || (b%c !=0) )
    {
        c--;
    }
    return c;
}
