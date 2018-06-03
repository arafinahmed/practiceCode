#include <stdio.h>
int main()
{
    int i, t, x, y, m, m2, m3;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &x, &y);
        m3 = x+y;
        if(m3%2!=0) printf("impossible\n");
        else if(x>=y)
        {
            m = (x+y)/2;
            m2 = x - m;
            printf("%d %d\n", m, m2);
        }
        else
            printf("impossible\n");

    }
    return 0;
}
