#include <stdio.h>
long long int ssum (long long int s);
int main()
{
    long long int n, t, i,sum, mx;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        sum = 3;
        mx = 1;
        scanf("%lld", &n);
        while(mx!=0)
        {
            mx = ssum(n) % 3;
            n = n -1;
            sum = sum + mx;
        }


        if(sum%3==0) printf("YES\n");
        else printf("NO\n");
    }


    return 0;
}
long long int ssum (long long int s)
{
    long long int sum=0, i;
    while(s>0)
    {
        i = s%10;
        s = s/10;
        sum = sum + i;
    }
    return sum;
}
