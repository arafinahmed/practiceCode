#include<stdio.h>
#include <stdlib.h>
long long int sumadd(long long int a);
int main()
{
    long long int n,d;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        long long int temp=n;
        while(temp>9)
        {
            temp=sumadd(temp);
        }
        printf("%lld\n", temp);

    }

    return 0;
}
long long int sumadd(long long int a)
{
    long long int i, s=0;

    while(a>0)
    {
        i = a%10;
        a= a / 10;
        s = s+i;
    }

    return s;
}
