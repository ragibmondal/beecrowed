#include <stdio.h>
int main()
{
    double A, B, C, avg;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    avg=((A*2)+(B*3)+(C*5))/10;

    printf("MEDIA = %.1lf\n", avg);

    return 0;
}
