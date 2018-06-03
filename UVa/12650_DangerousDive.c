#include<stdio.h>
int main()
{
    int vol, x,ret,i,j, n[10000];
    while(scanf("%d %d", &vol, &ret)!=EOF)
    {
        for(i=0; i<ret; i++)
        {
            scanf("%d", &n[i]);
        }
        if(vol==ret)
        {
            printf("*\n");
        }
        else
        {
            for(j=1; j<=vol; j++)
            {
                x = 0;
                for(i=0; i<ret; i++)
                {
                    if(n[i]==j)
                    {
                        x = 1;
                        break;
                    }

                }
                if(x==0)
                    printf("%d ", j);
            }
            printf("\n");
        }

    }

    return 0;
}
