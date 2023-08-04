#include<stdio.h>
int main()
{
    int n;
    double sum=0.0,d=0.0;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }
        sum+=n;
        d+=1;
    }
    double avg=sum/d;
    printf("%.2lf\n",avg);

    return 0;

}
