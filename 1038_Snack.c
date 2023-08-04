#include <stdio.h>
int main()
{
    int X, Y;
    float vtp;//value to pay;
    scanf("%d %d", &X, &Y);
    float ara[5]={4.00, 4.50, 5.00, 2.00, 1.50};
    vtp=ara[X-1]*Y;
    printf("Total: R$ %.2f\n",vtp);

    return 0;
}
