#include<stdio.h>
void main()
{
    int num, i, count=0 ,last, first;
    printf("Enter number:-");
    scanf("%d", &num);

    last = num%10;
    
    for(i=1 ;num!=0; i++)
    {
        printf("\n num %d", num);
        first = num;
        num = num/10;
        count ++;
    
    }
    printf("\n number of count:-%d", count);
    printf("\n first %d last6 %d",first,last);
    printf("\n sum  of first and last digits:%d",first + last);
}