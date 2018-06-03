#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000];
    int M, A, R, G, I, T, l, i;
    int c[6], min, x, t, q;
    scanf("%d", &t);
    for(q=1; q<=t; q++)
    {
        M = 0;
        A = 0;
        R = 0;
        G = 0;
        I =0;
        T=0;
        min = 6000;
        scanf("%s", ar);
        l = strlen(ar);
        for(i=0; i<l; i++)
        {
            if(ar[i]=='M')
                M++;
            else if(ar[i]=='A')
                A++;
            else if(ar[i]=='R')
                R++;
            else if(ar[i]=='G')
                G++;
            else if(ar[i]=='I')
                I++;
            else if(ar[i]=='T')
                T++;
        }

        c[0] = M;
        c[1] = A/3;
        c[2] = R/2;
        c[3] = G;
        c[4] = I;
        c[5] = T;
        for(x=0; x<6; x++)
        {
            if(c[x] < min)
                min = c[x];
        }
        printf("%d\n", min);
    }


    return 0;
}
