#include <stdio.h>
int main()
{
    int n, k, i, sum;
    while(scanf("%d", &n)!=EOF)
    {
        sum =0;
        if(n==0) break;
        n = n+1;
        while(n>2)
        {
            i= n%3;
            n=n/3;
            sum =sum+n;
            n= n+i;
        }
        printf("%d\n", sum);

    }
    return 0;
}
