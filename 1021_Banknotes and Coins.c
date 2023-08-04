#include<stdio.h>
int main()
{
    double money;
    int a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf",&money);
    int coin=money*100;
    //100, 50, 20, 10, 5, 2, 1,
    //multiplying all number*100
    a=coin/10000;
    coin = coin%10000;

    b=coin/5000;
    coin= coin%5000;

    c=coin/2000;
    coin= coin%2000;

    d=coin/1000;
    coin= coin%1000;

    e=coin/500;
    coin= coin%500;

    f=coin/200;
    coin= coin%200;

    g=coin/100;
    coin= coin%100;

    //(coin 0.50, 0.25, 0.10, 0.05, 0.01)*100
    h=coin/50;
    coin= coin%50;

    i=coin/25;
    coin= coin%25;

    j=coin/10;
    coin= coin%10;

    k=coin/5;
    coin= coin%5;

    l=coin/1;
    coin= coin%1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);

    return 0;
}
