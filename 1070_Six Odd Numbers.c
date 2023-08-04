#include <stdio.h>

int main()
{
    int n, i=0;
    scanf("%d", &n);
    while(i < 6){
        if(n%2!=0){
            printf("%d\n", n);
            i++;
        }
        n++;
     }
    return 0;
}
