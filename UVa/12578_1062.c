#include <stdio.h>
#include <math.h>


int main()
{
    double w, r, a1, a2, a3,  i, pi;
    int l,t;
    pi = acos(-1);
    scanf("%d", &t);


    for(i=1; i<=t; i++)
    {

        scanf("%d", &l);

        {
            w =(double) (3*l)/5;
            r = (double)l/5;
            a1 = l*w;
            a2 = pi*r*r;
            a3 = a1 - a2;
            printf("%.2lf %.2lf\n", a2, a3);
        }

    }

    return 0;
}
