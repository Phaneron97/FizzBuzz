#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u;

    printf("Amount of loops:");
    scanf("%d", &u);

    for (int i = 1; i <= u; i = i + 1)
    {
        if (i % 3 == 0)
        {
            printf("Fizz");
            if (i % 5 == 0)
            {
                printf("Buzz");
            } printf("\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }
}
