#include<stdio.h>
int main()
{
    int len,x, i, j, k,l, t,sum, c= 0;
    char lock[150], ans[150];
    scanf("%d", &t);
    for(x=1; x<=t; x++)
    {
        sum = 0;
        c++;
        scanf("%d", &len);

        scanf("%s", lock);
        scanf("%s", ans);

        for(i=0; i<len; i++)
        {
            j = lock[i];
            k = ans[i];
            if(j>k)
            {
                l = j-k;
            }
            else
            {
                l = k-j;
            }

            if(l>5)
            {
                l = 10 - l;
            }

            sum = sum + l;
        }
        printf("Case %d: %d\n",c,  sum);
    }

    return 0;
}
