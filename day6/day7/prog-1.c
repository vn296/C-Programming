#include <stdio.h>
void main()
{
    int x, y, z;
    printf("Enter x:-");
    scanf("%d", &x);

    printf("Enter y:-");
    scanf("%d", &y);

    printf("Enter z:-");
    scanf("%d", &z);

    if (x >= y)
    {
        if (x >= z)
        {
            printf("x is max");
        }
        else
        {
            printf("z is max");
        }
    }
    else
    {
        if (y >= z)
        {
            printf("y is max");
        }
        else
        {
            printf("z is max");
        }
    }
}
