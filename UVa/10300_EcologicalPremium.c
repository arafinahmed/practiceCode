#include <stdio.h>
int main()
{
    int i, f, k, t;
    int area, animal, env, tk[22], total;
    scanf("%d", &t);
    for(k=0; k<t; k++)
    {

    total = 0;
    scanf("%d", &f);
    for(i=0; i<f; i++)
    {
        scanf("%d %d %d", &area, &animal, &env);
        tk[i] = area * env ;
        total = total + tk[i];
    }
    printf("%d\n", total);
    }

    return 0;
}
