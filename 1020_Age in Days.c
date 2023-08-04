#include <stdio.h>
int main()
{
    int x;//x=days;
    int a, b, c;//a=year; b=month; c=days;

    scanf("%d", &x);

    a=x/365;
    x=x%365;
    b=x/30;
    c=x%30;

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", b);
    printf("%d dia(s)\n", c);

    return 0;

}
