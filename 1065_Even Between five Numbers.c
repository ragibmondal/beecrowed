#include <stdio.h>
int main()
{
    int a,sum=0;


    for(int i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
            sum=sum+1;
    }
    printf("%d valores pares\n", sum);

    return 0;
}
