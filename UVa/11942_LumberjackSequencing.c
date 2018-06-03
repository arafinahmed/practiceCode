#include <stdio.h>
int main()
{
    int i, t,j, inp[10];
    scanf("%d", &t);
    printf("Lumberjacks:\n");
    for(i=1; i<=t; i++)
    {

        for(j=0; j<10; j++)
        {
            scanf("%d", &inp[j]);

        }

        {
            if( (inp[0]>=inp[1]) && (inp[1]>=inp[2]) && (inp[2]>=inp[3]) && (inp[3]>=inp[4]) && (inp[4]>=inp[5]) && (inp[5]>=inp[6]) && (inp[6]>=inp[7]) && (inp[7]>=inp[8]) && (inp[8]>=inp[9]))
            {

                printf("Ordered\n");
            }
            else if( (inp[0]<=inp[1]) && (inp[1]<=inp[2]) && (inp[2]<=inp[3]) && (inp[3]<=inp[4]) && (inp[4]<=inp[5]) && (inp[5]<=inp[6]) && (inp[6]<=inp[7]) && (inp[7]<=inp[8]) && (inp[8]<=inp[9]))
               {
               printf("Ordered\n");
               }

            else
            {
                printf("Unordered\n");
            }

        }



    }
    return 0;
}
