#include <stdio.h>
int main()
{
    int i, j,k,k2[10000], l, m;

    while(scanf("%d", &i)!=EOF)
    {
        if(i<0)
            break;
        else if(i==0) printf("0\n");
        else
        {

            for(m=0; i>0; m++)
            {

                k = i%3;
                i = i/3;
                k2[m] =k;
            }

            for(j=m-1; j>=0; j--)
            {
                printf("%d", k2[j]);
            }
            printf("\n");
        }
    }


    return 0;
}
