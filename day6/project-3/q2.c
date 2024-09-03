#include<stdio.h>
void main()
{
    int num, i, count=0;
    printf("Entern Number:-");
    scanf("%d", &num);

    for(i=7; num!=0; i++);
    {
        printf("\nnum%d",num);
        num = num/10;
        count ++;
    }
    printf("\n number of count:- %d",count);
}