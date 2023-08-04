#include <stdio.h>
int main()
{
    int a, b;
    float c;
    double x;

    scanf("%d %d %f", &a, &b, &c);

    x=b*c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", x);

    return 0;
}
