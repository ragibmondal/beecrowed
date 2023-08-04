#include <stdio.h>
int main()
{
    float a,sum=0;

    for(int i=0;i<6;i++)
    {
        scanf("%f",&a);
        if(a>0)
            sum=sum+1;
    }
    printf("%.0f valores positivos\n", sum);

    return 0;
}
