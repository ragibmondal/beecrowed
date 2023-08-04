#include <stdio.h>
int main()
{
    double v , pi, R;
    pi=3.14159;


    scanf("%lf", &R);
    v=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n", v);

    return 0;
}

