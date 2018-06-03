#include <stdio.h>
int main()
{
    int n, i, tt,m ;
    scanf("%d", &tt);
    for(m=1; m<=tt; m++)
    {
        int b=0, w=0, t=0, a=0;
        scanf("%d", &n);
        char res[n];
        scanf("%s", &res);
        for(i=0; i<n; i++)
        {
            if(res[i]=='B')
                b++;
            else if(res[i]=='W')
                w++;
            else if(res[i]=='T')
                t++;
            else if(res[i]== 'A')
                a++;
        }
        if(w==0 && t==0 && b>0)
            printf("Case %d: BANGLAWASH\n", m);
        else if(b==0 && t==0 && w>0)
            printf("Case %d: WHITEWASH\n",m);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",m,b, w);
        else if(w>b)
            printf("Case %d: WWW %d - %d\n",m,w,b);
        else if(b==w && w!=0)
            printf("Case %d: DRAW %d %d\n",m, b, t);
        else if(b==0 && w==0 && t==0)
            printf("Case %d: ABANDONED\n",m);
        else if(b==0 && w==0 && t!=0)
            printf("Case %d: DRAW %d %d\n",m, b,t);
    }


    return 0;
}
