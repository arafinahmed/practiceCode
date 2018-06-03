#include<stdio.h>
int main()
{
    int i, j, temp=0, m, n, count, max;

    while(scanf("%d %d", &i, &j)!=EOF)
    {
        max = 0;
        printf("%d %d",i, j);
        if(i>j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        for(m=i; m<=j; m++)
        {
            count = 1;
            for(n=m; n>1;count++)
            {
                if(n%2==0)
                {
                    n = n /2;
                }
                else
                {
                    n = 3* n +1;
                }
            }
            if(max< count) max = count;
        }
        if(temp!=0)
        {
            temp = i;
            i = j;
            j = temp;
        }
        printf(" %d\n", max);
    }
    return 0;
}
