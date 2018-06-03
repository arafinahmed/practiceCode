#include <stdio.h>
int main()
{
    long long int n, i, sum;
    while(scanf("%lld", &n)!=EOF)
    {
        sum =0;

        for(i=1; i<=n; i=i+2)
        {
            sum = sum +i;
        }
        sum = 6*sum -9;
        printf("%lld\n", sum);

    }
    return 0;
}
