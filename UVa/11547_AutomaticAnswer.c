#include <stdio.h>
int main()
{
    int n,t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        n = ((((n*63+7492)*5)-498)%100)/10;

        if(n<0) printf("%d\n", -n);
        else printf("%d\n", n);
    }

    return 0;
}
