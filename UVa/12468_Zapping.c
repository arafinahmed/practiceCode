#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, ans;
    int a1, b1;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a<0 || b<0)
        {
            break;
        }
        else
        {
        a1 = abs(a-b);
        if(a1>50)
            a1 = 100 - a1;
        printf("%d\n", a1);
        }

    }
    return 0;
}
