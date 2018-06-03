#include <stdio.h>
#include <string.h>
int main()
{
    char key[1000];
    int l, i;
    while(gets(key))
    {

    l = strlen(key);
    for(i=0; i<l; i++)
    {
        if(key[i]=='S') key[i]='A';
        else if(key[i]=='D') key[i]='S';
        else if(key[i]=='F') key[i]='D';
        else if(key[i]=='G') key[i]='F';
        else if(key[i]=='H') key[i]='G';

        else if(key[i]=='W') key[i]='Q';
        else if(key[i]=='E') key[i]='W';
        else if(key[i]=='R') key[i]='E';
        else if(key[i]=='T') key[i]='R';
        else if(key[i]=='Y') key[i]='T';

        else if(key[i]=='X') key[i]='Z';
        else if(key[i]=='C') key[i]='X';
        else if(key[i]=='V') key[i]='C';
        else if(key[i]=='B') key[i]='V';
        else if(key[i]=='N') key[i]='B';

        else if(key[i]=='U') key[i]='Y';
        else if(key[i]=='I') key[i]='U';
        else if(key[i]=='O') key[i]='I';
        else if(key[i]=='P') key[i]='O';
        else if(key[i]=='[') key[i]='P';
        else if(key[i]==']') key[i]='[';
        else if(key[i]==92) key[i]=93;


        else if(key[i]=='J') key[i]='H';
        else if(key[i]=='K') key[i]='J';
        else if(key[i]=='L') key[i]='K';
        else if(key[i]==';') key[i]='L';
        else if(key[i]==39) key[i]=';';

        else if(key[i]=='M') key[i]='N';
        else if(key[i]==',') key[i]='M';
        else if(key[i]=='.') key[i]=',';
        else if(key[i]=='/') key[i]='.';


        else if(key[i]=='1') key[i]='`';
        else if(key[i]=='2') key[i]='1';
        else if(key[i]=='3') key[i]='2';
        else if(key[i]=='4') key[i]='3';
        else if(key[i]=='5') key[i]='4';
        else if(key[i]=='6') key[i]='5';
        else if(key[i]=='7') key[i]='6';
        else if(key[i]=='8') key[i]='7';
        else if(key[i]=='9') key[i]='8';
        else if(key[i]=='0') key[i]='9';
        else if(key[i]=='-') key[i]='0';
        else if(key[i]=='=') key[i]='-';


    }
    printf("%s\n", key);

    }
    return 0;
}
