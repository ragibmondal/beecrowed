#include <stdio.h>
int main()
{
    int x,z,sum=0,ex=1;
    scanf("%d %d", &x,&z);

    while(x>=z){
        scanf("%d", &z);
    }
    for(int i=x;i<z;i++){
        sum+=i;

        if(sum>z) break;

        ex++;
    }
    printf("%d\n",ex);

    return 0;
}
