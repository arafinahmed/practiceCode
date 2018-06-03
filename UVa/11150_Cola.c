#include<stdio.h>
int main()
{
    int n, k, i;
    while(scanf("%d", &n)!=EOF)
    {
        k = n+1;
        while(k>2)
        {
            i= k%3;
            k=k/3;
            n =n+k;
            k= k+i;
        }
        printf("%d\n", n);

    }
    return 0;
}
