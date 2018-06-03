#include <stdio.h>
int main()
{
    long long int x,y, i, j,k, c, temp, add;
    while(scanf("%lld %lld", &x, &y)!=EOF)
    {
        c=0;
        k=0;
        if(x==0 && y==0)
        {
            break;
        }

        if(y>x)
        {
            temp = y;
            y = x;
            x = temp;

        }



        for(; x>0;)
        {
            i = x%10;
            j = y%10;
            add= k+i+j;
            x= x / 10;
            y= y / 10;
            if(add>9)
            {
                c++;

            }
            k = add/10;

        }
        if(c==0)
        {
            printf("No carry operation.\n");
        }
        else if(c==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%lld carry operations.\n", c);
        }


    }

    return 0;
}
