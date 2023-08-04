
#include<stdio.h>
int main()
{
    int M,N,i,sum=0;

    while(1)
    {
        scanf("%d %d", &M,&N);

        if(M<=0||N<=0)
        {
            break;
        }
        else
        {
            if(M>N)
            {
                for(i=N,sum=0; i<=M; i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("Sum=%d\n",sum);
            }
            else if(N>M)
            {
                for(i=M,sum=0; i<=N; i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("Sum=%d\n", sum);
            }
        }

    }
    return 0;
}
