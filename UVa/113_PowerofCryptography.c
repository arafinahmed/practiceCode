#include<stdio.h>
#include<math.h>
int main()
{
    double x, n, y;
    while(scanf("%lf %lf", &n, &x)!=EOF)
    {
        y = pow(x, (1/n));
        printf("%.0lf\n", y);
    }
    return 0;
}
