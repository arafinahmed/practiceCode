#include <stdio.h>
#include <math.h>
int main()
{
    double r, n;
    double pi, area, i;
    pi = acos(-1);
    while(scanf("%lf %lf", &r, &n)!=EOF)
    {
        i = sin((2*pi)/n);
        area = (n * r * r * i)/2;
        printf("%.3lf\n", area);
    }
    return 0;
}
