#include<stdio.h>
double fac(double f);
double facx(double f1, double f2);
int main()
{
    double n, r, nmr, x1, x2, n1, ans;
    while(scanf("%lf %lf", &n, &r)!=EOF)
    {
        if(n==0 && r==0) break;
        nmr = n- r;
        if(r>nmr)
        {
            x1 = fac(nmr);
            n1 = n - nmr +1;
            x2 = facx(n1, n);
            ans = x2/x1;
            printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n, r, ans);
        }
        else
        {
            x1 = fac(r);
            n1 = n - r +1;
            x2 = facx(n1, n);
            ans = x2/x1;
            printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n, r, ans);
        }
    }
    return 0;
}
double fac(double f)
{
    double ff=1, i;
    for(i=1; i<=f; i++)
    {
        ff*=i;
    }
    return ff;
}

double facx(double f1, double f2)
{
    double fff=1, j;
    for(j=f1; j<=f2; j++)
    {
        fff*=j;
    }
    return fff;
}
