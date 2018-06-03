#include <stdio.h>
int main()
{
    int i, T, h, w, l;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d", &h, &w, &l);
        if(h<=20 && w <=20 && l<=20)
        {
            printf("Case %d: good\n", i);
        }
        else
        {
            printf("Case %d: bad\n", i);
        }
    }
    return 0;
}
