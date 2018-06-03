#include <stdio.h>
int main()
{
    int n, i;
    long long int sum;
    while(scanf("%d", &n)!=EOF)
    {
        if(n<0) break;
        sum = 1;
        sum = (n*(n+1))/2 + 1;
        printf("%lld\n", sum);
    }
    return 0;
}
