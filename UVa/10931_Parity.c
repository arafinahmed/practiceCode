#include <stdio.h>
int main()
{
    int i, j,k,k2[10000], l, m, p;

    while(scanf("%d", &i)!=EOF)
    {
        p=0;
        if(i==0) break;
        else
        {

            for(m=0; i>0; m++)
            {

                k = i%2;
                i = i/2;
                if(k==1) p++;
                k2[m] =k;
            }

            printf("The parity of ");
            for(j=m-1; j>=0; j--)
            {
                printf("%d", k2[j]);
            }

            printf(" is %d (mod 2).\n", p);
        }
    }
    return 0;
}
