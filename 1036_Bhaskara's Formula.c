#include <stdio.h>
int main()
{
    double A, B, C;
    float x, y, z;

    scanf("%lf %lf %lf", &A, &B, &C);
    x=(B*B)-(4*A*C);

    if (x<0 || A==0){
        printf("Impossivel calcular\n");
    }
    else{
        y=(-B+ sqrt(x))/(2*A);
        z=(-B- sqrt(x))/(2*A);

        printf("R1 = %.5f\n", y);
        printf("R2 = %.5f\n", z);
    }
    return 0;
}
