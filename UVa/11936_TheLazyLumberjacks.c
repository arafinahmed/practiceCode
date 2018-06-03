#include <stdio.h>
int main()
{
    int a, b, c;
    int n, i, s1, s2, s3;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a ,&b ,&c);
        s1 = a+b;
        s2 = b+c;
        s3 = c+a;
        if((s1>c) && (s2>b) && (s3>c))
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
