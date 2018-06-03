#include<stdio.h>
#include <string.h>
int main()
{
    char a[5000];
    int i=0;
    while(gets(a))
    {
        i++;
        int l=strlen(a);
        if(l==1 && a[0]=='*')
        {
            break;
        }
        else if(strcmp(a, "Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n", i);
        else if(strcmp(a, "Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n", i);
    }

    return 0;
}
