#include<stdio.h>
int main()
{
    int X,sum;;

    while(1)
    {
        sum=0;
        scanf("%d",&X);
        if(X==0)
            break;
        if(X%2!=0)
            X++;
        for(int i=0; i<5; i++)
        {
            sum+=X;
            X+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
