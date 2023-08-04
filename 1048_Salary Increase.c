#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);

    if(a>=0 && a<=400.00)
    {
        printf("Novo salario: %.2f\n",a+(a*.15));
        printf("Reajuste ganho: %.2f\n",(a*.15));
        printf("Em percentual: 15 %%\n");

    }
    if(a>=400.01 && a<=800.00)
    {
        printf("Novo salario: %.2f\n",a+(a*.12));
        printf("Reajuste ganho: %.2f\n",(a*.12));
        printf("Em percentual: 12 %%\n");

    }
    if(a>=800.01 && a<=1200.00)
    {
        printf("Novo salario: %.2f\n",a+(a*.10));
        printf("Reajuste ganho: %.2f\n",(a*.10));
        printf("Em percentual: 10 %%\n");

    }
    if(a>=1200.01 && a<=2000.00)
    {
        printf("Novo salario: %.2f\n",a+(a*.07));
        printf("Reajuste ganho: %.2f\n",(a*.07));
        printf("Em percentual: 7 %%\n");

    }
    if(a>2000.00)
    {
        printf("Novo salario: %.2f\n",a+(a*.04));
        printf("Reajuste ganho: %.2f\n",(a*.04));
        printf("Em percentual: 4 %%\n");

    }
    return 0;
}
