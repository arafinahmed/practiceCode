#include <stdio.h>
int main()
{
    int n, i, j,k, pos=0, max=0, sum3;
    scanf("%d", &n);
    int l[4];
    for(i=1; i<=n; i++)
    {
        max = 0;
        sum3 = 0;
        for(j=0; j<4; j++)
        {
            scanf("%d", &l[j]);
            if(max<l[j])
            {
                max = l[j];
                pos = j;
            }

        }
        for(k=0; k<4; k++)
        {
            if(k!=pos)
                sum3 = sum3 + l[k];
        }


        if(sum3>l[pos])
        {

            if(((l[0]==l[2])&&(l[1]==l[3])) || ((l[0]==l[1])&&(l[2]==l[3])) ||((l[0]==l[3])&&(l[1]==l[2])))
            {
                if( (l[0]==l[1]) && (l[1]==l[2]) && (l[2]==l[3]) )
                {
                    printf("square\n");
                }
                else
                {
                    printf("rectangle\n");
                }
            }
            else
            {
                printf("quadrangle\n");
            }
        }
        else
        {
            printf("banana\n");
        }


    }
    return 0;
}
