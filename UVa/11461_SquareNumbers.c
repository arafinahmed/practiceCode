#include <stdio.h>
int main()
{
    int a, b, c, i, j, temp;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        if(a == 0 && b== 0) break;

        c =0;
        if(a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        j =0;
        for(i=1; j<=b; i++)
        {
            j = i*i;
            if (j>=a)
            {
            c++;

            }

        }
        printf("%d\n", c-1);
    }
    return 0;
}
