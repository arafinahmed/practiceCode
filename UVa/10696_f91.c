#include<stdio.h>

int main()
{
    int x;
    while(scanf("%d", &x)!=EOF)
    {
        if (x==0)
            break;
        else if(x<=100)
            printf("f91(%d) = 91\n", x);
        else
            printf("f91(%d) = %d\n",x,  x -10);

    }
return 0;
}

