#include<stdio.h>
void main()
{
    int i,j,a[3][3],sum=0,row;


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

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum += a[i][j];
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("\navj:-%f",(float)sum / (row*row));
}