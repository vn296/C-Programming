#include<stdio.h>
void main()
{
    int i,j,a[3][3],b[3][3],c[3][3],sum=0,row,avg;


    printf("Enter row: ");
    scanf("%d",&row);

    printf("array a\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("Enter a[%d][%d]: ",i,j); // 1 2 3
            scanf("%d",&a[i][j]);
        }
    }
    printf("\narray b\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("Enter b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
        }
        printf("\n");
    }
    printf("c array");
       for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d \n",c[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum += c[i][j];
        }
        printf("\n");
    }
 printf("\navg:-%d",sum/(row*row));
}
