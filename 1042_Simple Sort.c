#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int numbers[3];

    scanf("%d %d %d", &a, &b, &c);
    numbers[0] = a;
    numbers[1] = b;
    numbers[2] = c;

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n\n", numbers[0], numbers[1], numbers[2]);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
