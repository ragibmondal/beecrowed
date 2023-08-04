#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        float X, Y;
        scanf("%f %f",&X,&Y);

        if(Y==0)printf("divisao impossivel\n");
        else if(X>Y)printf("%.1f\n", X/Y);
        else printf("%.1f\n",X/Y);
    }
    return 0;
}
