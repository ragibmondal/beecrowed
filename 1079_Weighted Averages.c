#include<stdio.h>
int main()
{
    float N,x,y,z, sum;
    scanf("%f", &N);
    for(int i=0; i<N; i++){
        scanf("%f%f%f",&x,&y,&z);
        sum=(x*2+y*3+z*5)/(2+3+5);
        printf("%.1f\n",sum);
    }
    return 0;
}
