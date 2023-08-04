#include <stdio.h>
int main()
{
    int  p1, p2, u1, u2;
    float pr1, pr2, t;

    scanf("%d %d %f", &p1, &u1, &pr1);
    scanf("%d %d %f", &p2, &u2, &pr2);

    t=(u1*pr1)+(u2*pr2);

    printf("VALOR A PAGAR: R$ %.2f\n", t);

    return 0;
}
