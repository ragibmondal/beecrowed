
#include<stdio.h>
int main()
{
    float ammount;
    scanf("%f",&ammount);
    {
        if(ammount >= 0.00 && ammount <= 2000.00)
        {
            printf("Isento\n");
        }
        else if(ammount > 2000.00 && ammount <=3000.00)
        {
            ammount = ammount - 2000.00;
            ammount = ammount*.08;
            printf("R$ %.2f\n", ammount);
        }
        else if(ammount > 3000.00 && ammount <=4500.00)
        {
            ammount= ammount - 3000.00;
            ammount = ammount * .18;
            printf("R$ %.2f\n", ammount+80);
        }
        else
        {
            ammount = ammount -4500.00;
            ammount = ammount * .28;
            printf("R$ %.2f\n", ammount+80+270);
        }

    }
    return 0;
}
