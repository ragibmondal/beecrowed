#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d", &N);

    for(i=1; i<=N*4; i=i+4)
    {
        printf("%d %d %d PUM\n",i,i+1,i+2);

    }
    return 0;
}
