#include <stdio.h>
int main()
{
    int num, i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter num:-");
        scanf("%d", &num);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n num is %d", num);
    }
    return 0;
}