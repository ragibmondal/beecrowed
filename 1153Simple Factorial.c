#include<stdio.h>
int main()
{
    int N,fac = 1;//fac=factorial

    scanf("%d", &N);

    for(int i = N; i >= 1; i--)
    {
        fac=fac*i;
    }
    printf("%d\n", fac);

    return 0;
}
