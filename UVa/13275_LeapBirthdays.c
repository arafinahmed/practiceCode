#include<stdio.h>
int main()
{
    int day, month, y1, y2;
    int x, c, t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%d %d %d %d", &day, &month, &y1, &y2);
        if(day==29 && month==2)
        {
            y1= y1+4;
            for(x=y1; x<=y2; x+=4)
            {
                if(x%100 != 0 || x%400 == 0)
                {
                    c++;
                }
            }
            printf("Case %d: %d\n",i, c);

        }
        else
        {
            printf("Case %d: %d\n",i, y2-y1);
        }
    }

    return 0;
}
