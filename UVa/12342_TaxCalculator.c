#include <stdio.h>
int main()
{
    int income,i,  t, j2, j3;
    double i2, i3;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {

        scanf("%d", &income);
        if(income<=180000)
        {
            printf("Case %d: 0\n", i);
        }
        else if(income>180000 && income <= 480000)
        {
            i2= (income - 180000)*0.1;
            j2= ((income - 180000)*10)/100;
            if(i2<2000)
            {
                printf("Case %d: 2000\n", i);
            }
            else if(i2>j2)
            {
                printf("Case %d: %d\n", i,j2+1);
            }
            else
            {
                printf("Case %d: %d\n", i, j2);
            }
        }
        else if(income>480000 && income <= 880000)
        {
            i3= (income - 480000)*0.15;
            i3 = i3 + 30000;
            j3= ((income - 480000)*15)/100;
            j3 = j3 + 30000;
            if(i3>j3)
            {
                printf("Case %d: %d\n", i, j3+1);
            }
            else
            {
                printf("Case %d: %d\n", i, j3);
            }
        }
        else if(income>880000 && income <=1180000 )
        {
            i3= (income - 880000)*0.2;
            i3 = i3 + 90000;
            j3= ((income - 880000)*20)/100;
            j3 = j3 + 90000;
            if(i3>j3)
            {
                printf("Case %d: %d\n", i, j3+1);
            }
            else
            {
                printf("Case %d: %d\n", i, j3);
            }
        }
        else
        {
            i3= (income - 1180000)*0.25;
            i3 = i3 + 150000;
            j3= ((income - 1180000)*25)/100;
            j3 = j3 + 150000;
            if(i3>j3)
            {
                printf("Case %d: %d\n", i, j3+1);
            }
            else
            {
                printf("Case %d: %d\n", i, j3);
            }
        }

    }

    return 0;
}
