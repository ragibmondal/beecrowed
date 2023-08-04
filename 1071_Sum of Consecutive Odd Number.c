#include<stdio.h>
int main()
{
    int X,Y;
    int sum=0;
    scanf("%d %d", &X, &Y);

    if(X<Y)
    {
        for(int i=X+1; i<Y; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
            printf("%d\n",sum);
        }
    }
    else
    {
        for (int i = Y + 1; i < X; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
