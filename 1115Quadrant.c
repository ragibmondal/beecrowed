#include<stdio.h>
int main()
{
    int X,Y;
    while(1)
    {
        scanf("%d %d",&X, &Y);
        if(X>0 && Y>0)
        {
            printf("primeiro\n");
        }
        else if(X>0 && Y<0)
        {
            printf("quarto\n");
        }
        else if(X<0 && Y<0)
        {
            printf("terceiro\n");
        }
        else if(X<0 && Y>0)
        {
            printf("segundo\n");
        }
        else if(X==0)
        {
            break;
        }
        else if(Y==0)
        {
            break;
        }
    }
    return 0;
}
