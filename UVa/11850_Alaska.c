#include<stdio.h>
int main()
{
    int t, loc[1500], i, x, max, min, flag, j, pos;
    int temp;
    while(scanf("%d", &t)!=EOF)
    {
        max = 0;
        min = 2000;
        flag = 0;
        if(t==0)
            break;
        for(i=0; i<t; i++)
        {
            scanf("%d", &loc[i]);
        }
        for(j=0; j<t-1; j++)
        {
            max = 0;
            for(i=j; i<t; i++)
            {

                if(max<loc[i])
                {
                    max = loc[i];
                pos = i;
                }

            }
            temp = loc[pos];
            loc[pos] = loc[j];
            loc[j]= temp;
        }
        if(loc[t-1]>200)
        {
            flag = 1;
        }

        else if(1422-loc[0]>100)
        {
            flag =1;
        }
        for(i=0; i<t-1; i++)
        {
            x = loc[i]- loc[i+1];
            if(x>200)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");


    }
    return 0;
}
