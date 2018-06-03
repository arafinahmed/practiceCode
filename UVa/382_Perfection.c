#include <stdio.h>
int main()
{
    int num, i, sum, m=0;

    while(scanf("%d", &num)!=EOF)
    {
        if(m==0) printf("PERFECTION OUTPUT\n");
        m = 8;
        sum = 0;
        if(num==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        for(i=1; i<=num/2; i++)
        {
            if(num%i==0)
                sum = sum+i;
        }
        if(sum>num) printf("%5d  ABUNDANT\n",num);
        else if(sum<num) printf("%5d  DEFICIENT\n",num);
        else printf("%5d  PERFECT\n",num);

    }
    return 0;
}
