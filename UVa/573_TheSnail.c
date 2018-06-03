#include <stdio.h>

int main()

{

    int i;
    double z, x,  sum, h, u, d, f, climbed, slide;
    while(scanf("%lf %lf %lf %lf", &h, &u, &d, &f)!=EOF)
    {
        if(h==0) break;
        f = f/100.0;
        climbed = u;
        sum = 0;
        slide = 0;
        for(i=1;;i++)
        {
            if(climbed<0) climbed=0;
            sum = sum + climbed;
            slide += (climbed-d);
            if(slide < 0)
            {
                printf("failure on day %d\n", i);
                break;
            }
            if(sum > h)
            {
                printf("success on day %d\n",i);
                break;
            }
            sum = sum - d;
            climbed -= (u*f);
        }
    }
    return 0;
}
