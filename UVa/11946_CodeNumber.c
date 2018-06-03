#include<stdio.h>
#include<string.h>


int main()
{
    int l, i, j, t;
    scanf("%d", &t);
    getchar();
    char x[10000];
    for(j=1; j<=t; j++)
    {
        while(gets(x))
        {
            for(i=0; x[i]!='\0'; i++)
        {
            if(x[i]=='1')
                x[i]='I';
            else if(x[i]=='3')
                x[i]='E';
            else if(x[i]=='0')
                x[i]='O';
            else if(x[i]=='8')
                x[i]='B';
            else if(x[i]=='5')
                x[i]='S';
            else if(x[i]=='7')
                x[i]='T';
            else if(x[i]=='2')
                x[i]='Z';
            else if(x[i]=='4')
                x[i]='A';
            else if(x[i]=='6')
                x[i]='G';
            else if(x[i]=='9')
                x[i]='P';
        }
        puts(x);
        if(j!=t-1) printf("\n");
        }






    }

    return 0;
}
