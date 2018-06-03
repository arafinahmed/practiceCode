#include <stdio.h>
int main()
{
    int  num,f, i, j, k, x, t;
    scanf("%d", &t);
    for(f=1; f<=t; f++)
    {
    int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        scanf("%d", &num);
        for(i=1; i<=num; i++)
        {
            x = i;
            while(x>0)
            {
                j=x%10;
                x = x/ 10;
                if(j==0)
                    a[0]++;
                else if (j==1)
                    a[1]++;
                else if (j==2)
                    a[2]++;
                else if (j==3)
                    a[3]++;
                else if (j==4)
                    a[4]++;
                else if (j==5)
                    a[5]++;
                else if (j==6)
                    a[6]++;
                else if (j==7)
                    a[7]++;
                else if (j==8)
                    a[8]++;
                else if (j==9)
                    a[9]++;
            }


        }
        printf("%d", a[0]);
        for(k=1; k<10; k++)
        {
            printf(" %d", a[k]);
        }
        printf("\n");
    }

    return 0;

}
