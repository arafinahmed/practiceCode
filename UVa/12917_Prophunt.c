#include<stdio.h>
int main()
{
    int p, h, o,z;
    while(scanf("%d %d %d", &p, &h, &o)!=EOF)
    {
        z = o -p;
        if(z<=0)
            printf("Hunters win!\n");
        else
        {

                h = o - h;
                if(h>=p)
                    printf("Props win!\n");
                else
                    printf("Hunters win!\n");


        }


    }
    return 0;
}
