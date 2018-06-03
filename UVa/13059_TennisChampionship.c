#include <stdio.h>
int main()
{
    long long int p;
    while(scanf("%lld", &p)!=EOF)
    {
        if(p>0)
        {
            printf("%lld\n", p-1);
        }
        else break;

    }
    return 0;
}
