#include<stdio.h>
int main()
{
    float num, positive=0, sum=0;

    for(int i=0; i<6; i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
            positive++;
            sum=sum+num;
        }

    }
    printf("%.0f valores positivos\n",positive);
    printf("%.1f\n",sum/positive);

    return 0;
}
