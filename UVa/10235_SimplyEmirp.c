#include <stdio.h>
int prime (int n);
int rev (int num);
int main()
{
    int number, nn, pri, eri ;
    while(scanf("%d", &number)!=EOF)
    {
        if(number>1)
        {
            pri = prime(number);
            nn = rev(number);
            if(nn==number)
            {
                if(pri==1)
                    printf("%d is prime.\n",number);
                else
                    printf("%d is not prime.\n",number);
            }
            else
            {
                eri = prime(nn);
                if(pri==0)
                {
                    printf("%d is not prime.\n",number);
                }
                else if(pri==1)
                {
                    if(eri==1)
                        printf("%d is emirp.\n", number);
                    else
                        printf("%d is prime.\n",number);
                }
            }



        }
        else
        {
            printf("%d is not prime.\n",number);
        }

    }

    return 0;
}

int prime (int n)
{
    int i, x=0, p;
    if(n==1)
        p=0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            p=0;
            x = 1;
            break;
        }

    }
    if(x==0)
    {
        p =1;
    }
    return p;
}

int rev (int num)
{
    int c, s=0;
    for (; num>0;)
    {
        c = num % 10;
        num = num / 10;
        s = s *10+ c;
    }
    return s;
}


