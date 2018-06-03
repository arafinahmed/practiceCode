#include <stdio.h>
int main()
{
    int i, j, k;
    while(scanf("%d %d", &i, &j)!=EOF)
    {
        k= (i*j)-1;
        printf("%d\n", k);
    }
    return 0;
}
