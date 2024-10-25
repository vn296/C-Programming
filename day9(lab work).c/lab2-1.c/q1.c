#include<stdio.h>
int main()
{
    int a,b,sum,sub,mulati,divi,modu;
    a = 12;
    b = 6;
    sum = a+b;
    sub = a-b;
    mulati = a*b;
    divi = a/b;
    modu = a%b;
    printf("sum of 12+6 = %d" ,sum);
    printf("\nsub of 12-6 = %d" ,sub);
    printf("\nmulati of 12*6 = %d" ,mulati);
    printf("\ndivi of 12/6 = %d" ,divi);
    printf("\nmodu of 12/6 = %d" ,modu);
    return 0;
}