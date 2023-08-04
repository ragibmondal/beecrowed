#include<stdio.h>
int main()
{
    double n,i,s,b=2.0;
    s=1.0;
    for(i=3;i<40;i++)
    {
        s+=i/b;
        i++;
        b*=2;
    }
    printf("%.2lf\n",s);
    return 0;
}
