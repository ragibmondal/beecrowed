#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n",N);

    int a, b, c, d, e, f, g;


    printf("%d nota(s) de R$ 100,00\n", N/100);

    a=N%100;
    printf("%d nota(s) de R$ 50,00\n", a/50);

    b=a%50;
    printf("%d nota(s) de R$ 20,00\n", b/20);

    c=b%20;
    printf("%d nota(s) de R$ 10,00\n", c/10);

    d=c%10;
    printf("%d nota(s) de R$ 5,00\n", d/5);

    e=d%5;
    printf("%d nota(s) de R$ 2,00\n", e/2);

    f=e%2;
    printf("%d nota(s) de R$ 1,00\n", f/1);

    return 0;
}
