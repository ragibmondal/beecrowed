#include <stdio.h>
int main()
{
    int A, B;
    float X;

    scanf("%d %d", &A, &B);

    X=(float)(A*B)/12;

    printf("%.3f\n", X);

    return 0;
}
