#include <stdio.h>
int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF)
    {
        if(a==0 && b==0 && c==0) break;
        a = a*a;
        b = b*b;
        c = c*c;
        if((a== b+c)||(b == a+c)||(c== a+b))
            printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
