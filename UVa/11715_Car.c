#include <stdio.h>
#include <math.h>
int main()
{
    int n, c=1;
    double u, v, t, s, a, usqr, vsqr;
    while(scanf("%d", &n )!=EOF)
    {

        if(n==0) break;
        else if(n==1)
        {
            scanf("%lf %lf %lf", &u, &v, &t);
            s = ((u+v)/2)*t;
            a = (v-u)/t;
            printf("Case %d: %.3lf %.3lf\n",c, s,a );
        }
        else if(n==2)
        {
            scanf("%lf %lf %lf", &u, &v, &a);
            t = (v-u)/a;
            s= ((u+v)/2)*t;
            printf("Case %d: %.3lf %.3lf\n",c, s,t );
        }
        else if(n==3)
        {
            scanf("%lf %lf %lf", &u, &a, &s);
            vsqr = (u*u)+(2*a*s);
            v = sqrt(vsqr);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c, v, t);

        }
        else if(n==4)
        {
            scanf("%lf %lf %lf", &v, &a, &s);
            usqr = (v*v) - (2*a*s);
            u = sqrt(usqr);
            t = (v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c, u, t);

        }
        c++;

    }
    return 0;
}
