#include <stdio.h>
#include <string.h>
double fac( double x);
int main()
{
    int t, i, j, q;
    double LL, sum, ans, l;
    scanf("%d", &t);
    char let[30];

    for(j=1; j<=t; j++)
    {
        scanf("%s", let);
        l = strlen(let);
        double a[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        sum = 1;
        for(i=0; i<l; i++)

        {

            if(let[i]=='A')
                a[0]++;
            else if(let[i]=='B')
                a[1]++;
            else if(let[i]=='C')
                a[2]++;
            else if(let[i]=='D')
                a[3]++;
            else if(let[i]=='E')
                a[4]++;
            else if(let[i]=='F')
                a[5]++;
            else if(let[i]=='G')
                a[6]++;
            else if(let[i]=='H')
                a[7]++;
            else if(let[i]=='I')
                a[8]++;
            else if(let[i]=='J')
                a[9]++;
            else if(let[i]=='K')
                a[10]++;
            else if(let[i]=='L')
                a[11]++;
            else if(let[i]=='M')
                a[12]++;
            else if(let[i]=='N')
                a[13]++;
            else if(let[i]=='O')
                a[14]++;
            else if(let[i]=='P')
                a[15]++;
            else if(let[i]=='Q')
                a[16]++;
            else if(let[i]=='R')
                a[17]++;
            else if(let[i]=='S')
                a[18]++;
            else if(let[i]=='T')
                a[19]++;
            else if(let[i]=='U')
                a[20]++;
            else if(let[i]=='V')
                a[21]++;
            else if(let[i]=='W')
                a[22]++;
            else if(let[i]=='X')
                a[23]++;
            else if(let[i]=='Y')
                a[24]++;
            else if(let[i]=='Z')
                a[25]++;
        }

        for(q=0; q<26; q++)
        {
            sum *= fac(a[q]);
        }
        LL = fac(l);
        ans = LL/sum;
        printf("Data set %d: %0.0lf\n",j, ans);
    }



    return 0;
}

double fac( double x)
{
    double y= 1;
    double m;
    for(m=1; m<=x; m++)
    {
        y *= m;
    }
    return y;
}
