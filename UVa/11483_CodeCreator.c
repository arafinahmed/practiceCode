#include<stdio.h>
#include<string.h>
char cre ( char line[1000]);
int main()
{
    int p, q, n, c=1;
    char file[150][150];
    while(scanf("%d", &n)!=EOF)
    {

        if(n==0) break;

        for(p=0; p<=n; p++)
        {
            gets(file[p]);
        }
        printf("Case %d:\n#include<string.h>\n#include<stdio.h>\nint main()\n{\n", c);
        for(q=1; q<=n; q++)
        {
            printf("printf(\"");
            cre(file[q]);
            printf("\\n\");\n");
        }
        printf("printf(\"\\n\");\n");
        printf("return 0;\n}\n");
        c++;
    }
    return 0;
}

char cre ( char line[1000])
{
    int i, l, m;


    l = strlen(line);
    for(i=0; i<l; i++)
    {
        if(line[i]==92)
        {
            l++;
            for(m=l-1; m>i; m--)
            {
                line[m]= line[m-1];
            }
            i=i+1;
        }
        else if(line[i]==34)
        {
            l++;
            for(m=l-1; m>i; m--)
            {
                line[m]= line[m-1];
            }
            line[i] = 92;
            i=i+1;
        }
        else if(line[i]==37)
        {
            l++;
            for(m=l-1; m>i; m--)
            {
                line[m]= line[m-1];
            }

            i=i+1;
        }
    }


    for(i=0; i<l; i++)
    {
        printf("%c", line[i]);
    }
    return line;
}
