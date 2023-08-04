#include <stdio.h>
#inlcude<math.h>
int main()
{
    double X1, X2, Y1, Y2, x, y, t, distance;

    scanf("%lf %lf", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);

    x = X2 - X1;
    y = Y2 - Y1;
    t = x*x + y*y;
    distance=sqrt(t);

    printf("%.4lf\n", distance);

    return 0;
}
