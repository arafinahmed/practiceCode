#include <stdio.h>
#include <string.h>
int main()
{
    int m=0;
    char a[20], b[20]="HELLO", c[20]="HOLA", d[20]="HALLO", e[20]="BONJOUR";
    char f[20]="CIAO", g[20]="ZDRAVSTVUJTE", i[20]="#";
    while(scanf("%s", a)!=EOF)
    {

        m++;
        if(strcmp(a, b)==0)
            printf("Case %d: ENGLISH\n",m);
        else if(strcmp(a, c)==0)
            printf("Case %d: SPANISH\n", m);
        else if(strcmp(a, d)==0)
            printf("Case %d: GERMAN\n", m);
        else if(strcmp(a, e)==0)
            printf("Case %d: FRENCH\n", m);
        else if(strcmp(a, f)==0)
            printf("Case %d: ITALIAN\n", m);
        else if(strcmp(a, g)==0)
            printf("Case %d: RUSSIAN\n", m);
        else if(strcmp(a, i)==0)
            break;
        else
            printf("Case %d: UNKNOWN\n", m);
    }
    return 0;
}



