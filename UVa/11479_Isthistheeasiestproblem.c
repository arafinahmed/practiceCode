#include<stdio.h>
int main()
{
    int t, i;
    long long int x, y, z;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld", &x, &y, &z);
        if(((x+y)>z) && ((y+z)>x) && ((x+z)>y))
        {
            if(x==y && y==z)
            {
                printf("Case %d: Equilateral\n", i);
            }
            else if((x==y && y!=z) || (y==z && z!=x)|| (x==z && z!=y))
            {
                printf("Case %d: Isosceles\n", i);
            }
            else
            {
                printf("Case %d: Scalene\n", i);
            }
        }
        else
        {
            printf("Case %d: Invalid\n", i);
        }
    }
    return 0;
}
