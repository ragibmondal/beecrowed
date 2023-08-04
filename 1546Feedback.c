#include <stdio.h>
int main()
{
    int N,K,X;
    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &K);
        for(int j=0; j<K; j++)
        {
            scanf("%d", &X);
            if(X == 1)
            {
                printf("Rolien\n");
            }
            else if(X == 2)
            {
                printf("Naej\n");
            }
            else if(X == 3)
            {
                printf("Elehcim\n");
            }
            else
            {
                printf("Odranoel\n");
            }
        }
    }
    return 0;
}
