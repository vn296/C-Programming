#include<stdio.h>
//a[] is array
void main()
{
    int i,a[5],index,value;

    for(i=0;i<5;i++)
    {
        printf("Enter the value of a[%d]:- ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter index of array:- ");
    scanf("%d",&index);

    printf("\nEnter value of array:- ");
    scanf("%d",&value);

    a[index]=value;

    for(i=0;i<5;i++)
    {
        printf("\na[%d]= %d",i,a[i]);
    }
}