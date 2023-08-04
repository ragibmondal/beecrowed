#include <stdio.h>
int main()
{
    int A, B, C, D, count;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    count = (A * B - C * D);

    printf("DIFERENCA = %d\n", count);

    return 0;

}
