#include <stdio.h>
int main()
{
    int N; //S for second;
    int h, m, se; //h for hour, m for minute, se for second;

    scanf("%d", &N);

    h=N/3600;
    N=N%3600;
    m=N/60;
    se= N%60;
    printf("%d:%d:%d\n", h, m, se);

    return 0;
}
