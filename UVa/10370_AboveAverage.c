#include <stdio.h>
int main()
{
    int t,n, i,j,k, sum;
    float avg, per, c;
    int marks[1000];
    scanf("%d", &t);
    for(k=1; k<=t; k++)
    {
        sum = 0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &marks[i]);
            sum = sum + marks[i];

        }
        avg = sum / n;
        c = 0;
        for(j=0; j<n; j++)
        {
            if(marks[j]>avg)
            {
                c++;
            }
        }
        per = (c*100)/n;
        printf("%.3f%%\n", per);

    }
    return 0;
}
