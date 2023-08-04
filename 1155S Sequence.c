#include<stdio.h>
int main()
{
    double i,s=1.0,u=1.0;
    for(i=2;i<=100;i++)
    {
        s+=u/i;
    }
    printf("%.2lf\n",s);

    return 0;
}
