#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,i*i+1,i*i*i+1);
    }
    return 0;
}
