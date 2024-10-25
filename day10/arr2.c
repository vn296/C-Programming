#include<stdio.h>
int main()
{
    int num[5],i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("enter Num:-");
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j] = temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\nnum is %d",num[i]);
    }
}