#include <stdio.h>
int main()
{
    double A, B, avg;

    scanf("%lf", &A);
    scanf("%lf", &B);

    avg=((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.5lf\n", avg);

    return 0;
}
