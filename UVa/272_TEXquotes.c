#include <stdio.h>
#include <string.h>
int main()
{
    char tex[1000];
    int l, c=0, i, m;
    while(gets(tex))
    {

        l = strlen(tex);
        for(i=0; i<l; i++)
        {
            if(tex[i]=='"')
            {
                c++;
                l++;

                if(c%2!=0)
                {
                    for(m=l-1; m>=i+2; m--)
                    {
                        tex[m] = tex[m-1];
                    }
                    tex[i] = '`';
                    tex[i+1] = '`';
                }
                else
                {
                    for(m=l-1; m>=i+2; m--)
                    {
                        tex[m] = tex[m-1];
                    }
                    tex[i] = 39 ;
                    tex[i+1] = 39 ;
                }
            }

        }
        for(i=0; i<l; i++)
        {
            printf("%c", tex[i]);
        }
        printf("\n");

    }

    return 0;
}
